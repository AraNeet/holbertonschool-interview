# Star Wars API
[![Project Badge](https://img.shields.io/badge/Progress-0%25-red)](https://www.holbertonschool.com)

## Description

In this project, you are tasked with using the Star Wars API to retrieve information about characters from specific Star Wars movies. The main goal is to fetch and display all the characters from a specific movie ID, following the order of the characters as listed in the API response.

The project requires you to write a Node.js script that takes a movie ID as input and displays each character's name in the order they appear in the API response. You will need to use the `request` module to interact with the Star Wars API and retrieve the required data.

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be interpreted on Ubuntu 14.04 LTS using `node` (version 10.14.x)
- All your files should end with a new line
- The first line of all your files should be exactly `#!/usr/bin/node`
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should be semistandard compliant. Follow the **Standard** style guide with semicolons on top, and refer to the **AirBnB style** as a secondary reference
- All your files must be executable
- The length of your files will be tested using `wc`
- You are **not allowed** to use `var`

### Installations

1. **Install Node.js 10**

   Run the following commands to install Node.js version 10 on your system:

   ```bash
   $ curl -sL https://deb.nodesource.com/setup_10.x | sudo -E bash -
   $ sudo apt-get install -y nodejs
