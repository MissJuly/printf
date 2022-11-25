# Welcome to _printf

## ALX collaboration project.

[Task 0](link) - Write a function that produces output according to a format.
- Prototype: int _printf(const char *format, ...);
- Returns: the number of characters printed (excluding the null byte used to end output to strings)
- write output to stdout, the standard output stream
- format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
  - c
  - s
  - %

[Task 1](link) - Handle the following conversion specifiers:
 - d
 - i
 
 [Task 2](link) - Handle the following custom conversion specifiers:
 - b: the unsigned int argument is converted to binary
 
 [Task 3](link) - Handle the following conversion specifiers:
- u
- o
- x
- X

[Task 4](link) - Use a local buffer of 1024 chars in order to call write as little as possible.

[Task 5](link) - Handle the following custom conversion specifier:
- S : prints the string.
- Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
