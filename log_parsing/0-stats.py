#!/usr/bin/python3
"""
Log Metrics Collector

Reads log lines from standard input and computes metrics in real-time.

Expected input format:
<IP Address> - [<datetime>] "GET /projects/260 HTTP/1.1" <status code> <file size>

This format matches the output of `0-generator.py`.

Behavior:
- Processes each valid log line and extracts the status code and file size.
- Accumulates total file size and counts occurrences of valid status codes.
- Ignores invalid lines.
- Prints metrics after every 10 valid lines or upon KeyboardInterrupt (Ctrl+C).
"""

import sys
import re

total_file_size = 0
status_code_counts = {}
valid_status_codes = {'200', '301', '400', '401', '403', '404', '405', '500'}
line_counter = 0

# Matches generator output format
log_pattern = re.compile(
    r'^\d{1,3}(?:\.\d{1,3}){3} - \[\d{4}-\d{2}-\d{2} \d{2}:\d{2}:\d{2}\.\d+\] '
    r'"GET /projects/260 HTTP/1\.1" (\d{3}) (\d+)$'
)


def print_metrics():
    """Prints the current metrics."""
    print(f"File size: {total_file_size}")
    for code in sorted(valid_status_codes):
        if code in status_code_counts:
            print(f"{code}: {status_code_counts[code]}")


if __name__ == "__main__":
    try:
        for line in sys.stdin:
            line = line.strip()
            match = log_pattern.match(line)
            if not match:
                continue  # Invalid line, skip

            status_code, file_size = match.groups()
            try:
                total_file_size += int(file_size)
            except ValueError:
                continue  # Skip line if file_size is not an integer

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
