# Count it!

## Description

In this project, you will write a recursive function that queries the **Reddit API**, retrieves the hot articles in a given subreddit, and counts the occurrences of specific keywords (case-insensitive). The results are printed in descending order of frequency, and in the case of a tie, alphabetically.

### Resources

- [Reddit API Documentation](https://www.reddit.com/dev/api/)

## Requirements

#### General
- **Allowed editors:** vi, vim, emacs
- All your files will be interpreted/compiled on **Ubuntu 14.04 LTS** using **python3** (version 3.4.3)
- All your files should end with a new line
- The first line of all your files should be exactly: `#!/usr/bin/python3`
- Libraries imported in your Python files must be organized in **alphabetical order**
- A **README.md** file, at the root of the folder of the project, is mandatory
- Your code should use the **PEP 8** style
- All your files must be **executable**
- The length of your files will be tested using `wc`
- All your modules should have documentation (you can check this with: `python3 -c 'print(__import__("my_module").__doc__)'`)
- You must use the **Requests** module for sending HTTP requests to the Reddit API

## Tasks

### 0. Count it! (Mandatory)

Write a recursive function that queries the Reddit API, parses the title of all hot articles, and prints a sorted count of given keywords (case-insensitive). The function must count how often each keyword appears in the titles and return the results sorted by frequency.

#### Requirements:

- **Prototype:** `def count_words(subreddit, word_list)`
- The function should work without needing to supply a starting value in the main function.
- If `word_list` contains duplicate words (case-insensitive), the final count should include the sum of all occurrences (e.g., `java java java` counts as 3 occurrences of `java`).
- Results should be printed in descending order by count. If multiple keywords have the same count, they should be sorted alphabetically (A-Z).
- The words must be printed in **lowercase**.
- Words with no occurrences should be skipped and not printed.
- If no posts match or the subreddit is invalid, print nothing.
- Your code **must be recursive**. (You can achieve the same result with a loop, but the task is to use recursion.)

#### Example

Assuming `word_list` contains `["java", "javascript"]` and you query the subreddit `programming`:

```python
count_words('programming', ['java', 'javascript'])
