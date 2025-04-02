#!/usr/bin/python3
"""
Log Metrics Collector

This script reads log entries from standard input and computes metrics in real-time.

Expected input format:
<IP Address> - [<date>] "GET /projects/260 HTTP/1.1" <status code> <file size>

Behavior:
- Processes each valid log line and extracts the status code and file size.
- Accumulates total file size and counts the occurrence of specific status codes.
- Prints metrics after every 10 valid lines or upon receiving a keyboard interruption (Ctrl+C).
- Metrics include:
    * Total file size
    * Number of occurrences per valid status code:
        200, 301, 400, 401, 403, 404, 405, 500

Invalid lines (not matching the expected format) are ignored.

Usage:
    cat access.log | ./0-stats.py
    OR
    python 0-generator.py | python 0-stats.py

Author: [Your Name]
Date: [Optional]
"""
import sys
import re

# Initialize counters
total_file_size = 0
status_code_counts = {}
line_counter = 0

# Valid status code
valid_status_codes = {'200', '301', '400', '401', '403', '404', '405', '500'}

# Regular experssion pattern to match the line

log_pattern = re.compile(
    r'^\d{1,3}(?:\.\d{1,3}){3} - \[\d{4}-\d{2}-\d{2} \d{2}:\d{2}:\d{2}\] "GET /projects/260 HTTP/1\.1" (\d{3}) (\d+)$'
)

def print_metrics():
    """Print accumulated metrics"""
    print(f"File size: {total_file_size}")
    for code in sorted(valid_status_codes):
        if code in status_code_counts:
            print(f"{code}: {status_code_counts[code]}")

try:
    for line in sys.stdin:
        line = line.strip()
        match = log_pattern.match(line)
        if match:
            status_code, file_size = match.groups()
            total_file_size += int(file_size)
            if status_code in valid_status_codes:
                status_code_counts[status_code] = status_code_counts.get(status_code, 0) + 1
            line_counter += 1

            if line_counter % 10 == 0:
                print_metrics()
except KeyboardInterrupt:
    print_metrics()
    raise
finally:
    print_metrics()
                
