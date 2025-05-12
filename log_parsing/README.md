# Log Parsing

## Description
This project involves writing a script that reads stdin line by line and computes metrics. The script should process log entries and provide the following statistics:
- The total file size of all processed entries.
- The count of log entries by status code (200, 301, 400, 401, 403, 404, 405, and 500).

After every 10 lines and/or a keyboard interruption (CTRL + C), the script will print the metrics gathered so far.

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be interpreted/compiled on Ubuntu 14.04 LTS using `python3` (version 3.4.3)
- All files should end with a new line
- The first line of all your files should be exactly `#!/usr/bin/python3`
- A `README.md` file, at the root of the project folder, is mandatory
- Your code should use the `PEP 8` style (version 1.7.x)
- All files must be executable
- The length of your files will be tested using `wc`

## Tasks

### 0. Log Parsing (Mandatory)
Write a script that reads stdin line by line and computes metrics