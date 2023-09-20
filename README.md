# Custom printf Implementation

## Overview

This project is a custom implementation of the `printf` function in C. It provides a flexible and extensible way to format and print data to the standard output.

## Features

- Supports standard conversion specifiers: `%c`, `%s`, `%%`.
- Handles custom conversion specifiers: `%b`, `%S`.
- Additional advanced features for handling flag characters, length modifiers, field width, precision, and more.
- Efficiently uses a local buffer to minimize calls to the `write` function.
- Includes support for custom conversion specifiers `%r` and `%R` for reversing and rot13'ing strings.

## Installation

To use this custom `printf` implementation in your project, follow these steps:

1. Clone this repository:

   ```bash
   git clone https://github.com/Ismail-Taha/printf.git

2. Run : gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

