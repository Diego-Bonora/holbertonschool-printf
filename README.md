<div id="header" align="center">
	<h1  class="page_title" align="center" width="50">C - printf</h1>
_printf is the standard function in C, and in many programming languages, for printing format strings on the screen.
It is a function that takes an indefinite number of arguments. The parameter coast of a constant string called format, and a number of additional undefined arguments
	</div>
	 
---

<div>
<details>
  <summary><h1>Functioning</h1></summary>
  <p>What this function does is to go through the format constant character by character, and according to the character it finds, it evaluates and performs a function.

To be more specific, the format string includes the text to be printed literally and as it proceeds, it will check if the current character is a '%', when it finds this format indicator, in case the next character is a format specifier, it replaces it with the text obtained from the added parameters, in case it is another '%', it simply prints that '%', if it is neither a format type nor a '%', it simply prints the % followed by the character after that '%'.</p>
Example:

Input:
```c
int mian()
{
	_printf("Character:[%c]|n", 'H');
	return(0);
}
```
Output:
```
Character:[H]
```
<h2>Format indicator</h2>
<p>The symbol '%' denotes the beginning of the formatting mark.</p>
If several indicators are pickled in the format constant string, the values are included in the same order in which they appear.

As shown in the following example:

Input
```c
int main()
{
	_printf("Color %s, number %d", "red", 1234567);
	return (0);
}
```
Output:
```
Color red, number 1234567
```
<h2>Syntax</h2>

```
_printf("% [ format ]", type);
```

<details>
  <summary align="center" ><h1width="50">Format type field</h1></summary>
  <table align="center" width="50">
	<tr>
    <th>format types</th>
    <th>description </th>
  </tr>
  <tr>
    <td>%c</td>
    <td>Prints the corresponding ASCII character</td>
  </tr>
  <tr>
    <td>%s</td>
    <td>Character string (ending in '0')</td>
  </tr>
  <tr>
    <td>%d, %i</td>
    <td>Signed decimal conversion of an integer</td>
  </tr>
  <tr>
    <td>%b</td>
    <td>the unsigned int argument is converted to binary</td>
  </tr>
  <tr>
    <td>%u</td>
    <td>Unsigned decimal conversion of an integer</td>
  </tr>
  <tr>
    <td>%o</td>
    <td>Unsigned octal conversion of an integer</td>
  </tr>
  <tr>
    <td>%x, %X</td>
    <td>Unsigned hexadecimal conversion, x for lowercase, X for uppercase</td>
  </tr>
  <tr>
    <td>%r</td>
    <td>prints the reversed string</td>
  </tr>
  <tr>
    <td>%R</td>
    <td>prints the rot13'ed string</td>
  </tr>
  <tr>
    <td>%p </td>
    <td>Memory address (pointer)</td>
  </tr>
</table>
</details>

<details>
  <summary><h2>compilation and installation</h2></summary>
  
  ```c
  // clones the repository
  $ git clone https://github.com/Diego-Bonora/holbertonschool-printf
  $ cd holbertonschool-printf
  // creates a main call function
  $ make all
  gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o printf
  ./printf
  // output examples
 Negative:[-762534]
 Unsigned:[2147484671]
 Unsigned octal:[20000001777]
 Unsigned hexadecimal:[800003ff, 800003FF]
 Character:[H]
 String:[I am a string !]
 ```
 
</details>
	
<div>
<details>

  <summary align="center"><h2 width="50">Examples and tests</h2></summary>
  Compilation:
  
  ```c
  
  // You might want to look at the gcc flag -Wno-format when testing with your printf and the standard printf. Example of test file that you could use:
  $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
  
  ````
  
testing function

* INPUTS:

```c
#include "main.h"
int main(void)
{
    int len;
    unsigned int ui;
    void *addr;
	char *str = "Sapitorico";

    len = _printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    _printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    _printf("Unknown:[%r]\n",  str);
	_printf("Prints the rot13'ed:[%R]\n", str);
    return (0);
}
```
* OUTPUTS:

```
Let's try to printf a simple sentence.
Length:[39, 39]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
String:[I am a string !]
Address:[0x7ffe637541f0]
Percent:[%]
Len:[12]
Unknown:[ocirotipaS]
Prints the rot13'ed:[Facvgbevpb]
```
</details>
</div>
</details>
</div>

----

<div>
<details>
<summary><h1>Files</h1></summary>
<h4>Index</h4>
	
1. [ _printf.c ](#_printf.c)
	
2. [ main.h ](#main.h)
	
3. [ get_function.c ](#get_function.c)
	
4. [ print_number.c ](#print_number.c)
	
5. [ print_rev.c ](#print_rev.c)

6. [ normal_functions.c ](#normal_functions.c)

7. [ advance_functions.c ](#advance_functions.c)

8. [ _putchar.c ](#_putchar.c)

9. [ print_unsigned.c ](#print_unsigned.c)

10. [ realloc.c ](#realloc.c)

11. [ strlen.c ](#strlen.c)

12. [ printf.man ](#printf.man)

<a name="_printf.c"></a>
<h2><a href="https://github.com/Diego-Bonora/holbertonschool-printf/blob/master/_printf.c">_printf.c</a></h2>
	
This file contains the main code of the printf function.
In this one the function get_function is invoked to look for the functions of formats, and this same function is the one that is in charge of sending the parameters to these functions to print formats.
	
Prototype: ```int _printf(const char *format, ...);```
	
<details>
<summary><h1 align="center">flow chart</h1></summary>
	<img width="12032" alt="diagrama de flujo de printf" src="">
</details>

---
	
<a name="main.h"></a>
	<h2><a href="https://github.com/Diego-Bonora/holbertonschool-printf/blob/master/main.h">main.h</a></h2>
this file has all the maros headers used by the functions, function prototypes and structure.
	
```c
/**
 * struct get_formats - contains the formats
 * @f_s: format specifier
 * @f: pointer to formatting functions
 *
 * Description: this structure contains the format indicators in the f_s layer, and the functions corresponding to these formats in the field f
 */
typedef struct get_formats
{
	char f_s;
	int (*f)(va_list args);
} get_t;
```

<a name="get_function.c"></a>
<h2><a href="https://github.com/Diego-Bonora/holbertonschool-printf/blob/master/get_function.c">get_function.c</a></h2>
This file contains the function that will give us the function to print the required format
Contains the format flags and their respective functions.
	
```get_t functions[ array of formats and functions ]```

<a name="normal_functions.c"></a>
<h2><a href="https://github.com/Diego-Bonora/holbertonschool-printf/blob/master/normal_functions.c">normal_functions.c</a></h2>
This file contains the functions for printing strings composed of characters.

* [ **c** ]
Converts an argument of type int to a value of type unsigned char and writes the corresponding ASCII character code to the output stream.

* [ **s** ]
Writes the characters of the string specified by an argument of type char *, up to, but not including the terminating NUL character ('\0'), to the output stream.

* [ **x, X** ] 
Converts an unsigned argument to unsigned hexadecimal notation, and writes it to the output stream. The default precision is 1, but if more digits are needed, leading zeros are added.
Hexadecimal notation uses the digits 0 through 9 and the characters a through f or A through F for x or X conversions, respectively, as hexadecimal digits. Subject to the control flag alternatively, 0x or 0X is prefixed to the output.

* [ **R** ]
Encrypt a string in ROT13, rotate 13 positions" a letter, moving any letter 13 positions in the alphabet.

<a name="print_number.c"></a>
<h2><a href="https://github.com/Diego-Bonora/holbertonschool-printf/blob/master/print_number.c">print_numbers.c</a></h2>
This file contains the functions to print format strings composed of numbers

* [ **d, i** ]
Converts an int argument to signed decimal notation and writes it to the output stream.

* [ **b** ]
Converts an unsigned integer argument to binary

* [ **u** ]
Converts an unsigned argument to unsigned decimal notation, and writes it to the output stream.

* [ **o** ]
Converts an unsigned argument to unsigned octal notation and writes it to the output stream.

<a name="_putchar"></a>
<h2><a href="https://github.com/Diego-Bonora/holbertonschool-printf/blob/master/_putchar.c">_putchar.c</a></h2>
This file contains the function putchar that takes a single character as an argument and writes it to the standard output


<a name="advance_functions.c"></a>
<h2><a href="https://github.com/Diego-Bonora/holbertonschool-printf/blob/master/advance_functions.c">advance_functions.c</a></h2>
This file contains all auxiliary functions used by other functions.


<a name="print_rev.c"></a>
<h2><a href="https://github.com/Diego-Bonora/holbertonschool-printf/blob/master/print_rev.c">print_rev.c</a></h2>
This file contains the function print_rev, this function prints the characters in the input string in reverse order to the console.


<a name="print_unsigned"></a>
<h2><a href="https://github.com/Diego-Bonora/holbertonschool-printf/blob/master/print_unsigned.c">print_unsigned</a></h2>
This file contains the function print_unsigned_num, this function prints an unsigned integer to the console with its digits reversed, including any leading zeros.

<a name="realloc.c"></a>
<h2><a href="https://github.com/Diego-Bonora/holbertonschool-printf/blob/master/realloc.c">realloc.c</a></h2>
This file contains the function _realloc, this function reallocated memory for a block of data pointed to by ptr to a new block of memory of a specified size size, copies the data from the old block to the new block, and frees the old block.

<a name="strlen.c"></a>
<h2><a href="https://github.com/Diego-Bonora/holbertonschool-printf/blob/master/strlen.c">strlen.c</a></h2>
This file contains the function _strlen, this function calculates the length of a string by counting the number of characters in it until it reaches the null byte that marks the end of the string.


<a name="printf.man"></a>
<h2><a href="">printf.man</a></h2>

* printf function manual, to view the man page, enter:

```man ./printf.man```

</details>
</div>

---

<div>
<details>
<summary><h3>Project description</h3></summary>
	
This is the first group project, carried out by Holberton students.
The goal of this assignment is to recreate the printf function, a basic version of the standard function.
It also encourages group and team work with a randomly assigned partner.

---

<details>
  <summary>Requirements</summary>
  
* Allowed editors: vi, vim, emacs.

* You are not allowed to use global variables.

* No more than 5 functions per file.

* it is not necessary to upload the test network to your repository.

* The prototypes of all your functions should be included in your header file called main.h.

* Note that we will not provide the putchar function for this project.
</details>

---

<details>
  <summary>Authorized functions and macros</summary>
  
* write (man 2 write)

* malloc (man 3 malloc)

* free (man 3 free)

* va_start (man 3 va_start)

* va_end (man 3 va_end)

* va_copy (man 3 va_copy)

* va_arg (man 3 va_arg)
</details>
</details>
</div>

---

<footer>
<p align="center">Authors:<p>
<p align="center"><a href="https://github.com/Diego-Bonora" target="blank">Diego-Bonora</a></p>
<p align="center"><a href="https://github.com/MarcosPerdomoVaz" target="blank">MarcosPerdomoVaz</a></p>
</footer>
