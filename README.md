# 0x11. C - printf

Our first group project, we're replicating the printf() fucntion from the C Standard Library

### Introduction
Produces output to stdout according to a format described below similar to the printf() function.

### Specifications
No allowed to use global variable
No more than 5 functions per file
All files end with a new line

### Compilation
The code will be compiled this way:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

#### Specifiers
Specifier characters at the end define the type and the interpretation of its corresponding argument:
|Specifier |Output|
--- | ---|
|c	|character|
|s	|string|
|d or i	|Signed integer|
|%	|%|
