# _printf function
------------

Implementation of the function `printf` as a project for Holberton School. In this project we apply the knowledge that we have learned  in C programming language.

---
## Prototype
int_printf(const char *format, ...);
---
## Examples
**String**
* Input: ```_printf("%s\n", 'Hello World.');```
* Output: ```Hello World.```

**Character**
* Input: ```_printf("The first letter in the alphabet is %c\n", 'A');```
* Output: ```The first letter in the alphabet is A```

**Integer**
* Input: ```_printf("This is a integer: %i\n", 12);```
* Output: ```This is a integer: 12```

## Mandatory Tasks
- [x] Write function that produces output with conversion specifiers ```c```, ```s```, and ```%```.
- [x] Handle conversion specifiers ```d```, ```i```.
- [x] Create a man page for your function.
## Advanced Tasks
- [x] Handle conversion specifier ```b```.
- [x] Handle conversion specifiers ```u```, ```o```, ```x```, ```X```.
- [ ] Use a local buffer of 1024 chars in order to call write as little as possible.
- [ ] Handle conversion specifier ```S```.
- [ ] Handle conversion specifier ```p```.
- [ ] Handle flag characters ```+```, space, and ```#``` for non-custom conversion specifiers.
- [ ] Handle length modifiers ```l``` and ```h``` for non-custom conversion specifiers.
- [ ] Handle the field width for non-custom conversion specifiers.
- [ ] Handle the precision for non-custom conversion specifiers.
- [ ] Handle the ```0``` flag character for non-custom conversion specifiers.
- [x] Handle the custom conversion specifier ```r``` that prints the reversed string.
- [x] Handle the custom conversion specifier ```R``` that prints the rot13'ed string.
- [ ] All above options should work well together.

## Files
File | Description
--- | ---
`_binary_printf.c` | Contains a function that converts and prints a number to binary
`_cs_printf.c` | Contains a function that prints a char and a string
`_hexa.c` | Contains a function that converts and prints a number to hexadecimal
`_int_printf.c` | Contains a function that prints a string
`_min_hexa.c` | Contains a function that converts and printsa number to hexadecimal (lowcase)
`_octal_printf.c` | Contains a function that converts a number to octal
`_print_rot13.c` | Contains a function that converts to rot13
`_printf.c` | Prints according to an specified format
`_printf_rev.c` | Contains a function that reverse a string
`_printf_struc.c` | Contains a function that handles % format
`_putchar.c` | Contains a function that prints a char
`_unsig_printf.c` | Contain function that handles unsigned int
`holberton.h` | header file
---
## Authors
[Diego Ramos](https://github.com/DiegoRmsR) | [@Imdiegoramoss](https://twitter.com/Imdiegoramoss)

[Juan Cortes](https://github.com/JUCORTESA) | [@JUCORTESA](https://twitter.com/JUCORTESA)
