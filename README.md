<div id="header" align="left">
	<h1  class="page_title" align="center" width="60">Holberton School _printf</h1>
In this proyect we were tasked to make the printf function from scratch.
<br>
The printf function in C is a standard library function that produces an output acording to the required format and a number of additional undefined arguments, finaly, the output is written in the standar output.
</div>
	 
---

<div>
<details>
  	<summary><h1>Requirements</h1></summary>
	<div>
		<h2>General</h2>
	<ul>
		<li>Allowed editors: vi, vim, emacs</li>
		<li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
		<li>All your files should end with a new line</li>
		<li>A README.md file, at the root of the folder of the project is mandatory</li>
		<li>Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl</li>
		<li>You are not allowed to use global variables</li>
		<li>No more than 5 functions per file</li>
		<li>The prototypes of all your functions should be included in your header file called main.h</li>
		<li>Don’t forget to push your header file</li>
		<li>All your header files should be include guarded</li>
	</ul>
		<hr>
		<h2>Authorized functions and macros</h2>
	<ul>
		<li>write (man 2 write)</li>
		<li>malloc (man 3 malloc)</li>
		<li>free (man 3 free)</li>
		<li>va_start (man 3 va_start)</li>
		<li>va_end (man 3 va_end)</li>
		<li>va_copy (man 3 va_copy)</li>
		<li>va_arg (man 3 va_arg)</li>
	</ul>
	</div>
</details>
</div>

---

<div>
<details>
  <summary><h1>Function operation</h1></summary>
  <p>What this function does is to go through the format constant character by character, and according to the character it finds, it evaluates and performs a function.

The format string includes text and may contain the special character '%', when it does find a special character it will check if the next character its a format specifier, and then it will replace the '%' and the character with the next argument, if the next character its another '%' it will print a '%', if it doesnt mach with any special character it will print the '%' and the character, and if ther`s a NULL byte after the '%' it will return -1.</p>
	  

Example:

Input:
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
	
<details>
  <summary align="left" ><h3 width="60">Format type examples</h3></summary>
  <table align="left">
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
    <td>Character string (ending in '\0')</td>
  </tr>
  <tr>
    <td>%d, %i</td>
    <td>Converts a decimal into string for printing it</td>
  </tr>
  <tr>
    <td>%b</td>
    <td>Converts an unsigned int argument into binary</td>
  </tr>
  <tr>
    <td>%u</td>
    <td>Converts an unsigned int argument into string for printing it</td>
  </tr>
  <tr>
    <td>%o</td>
    <td>Converts an unsigned int argument into octal</td>
  </tr>
  <tr>
    <td>%x, %X</td>
    <td>Converts an unsigned int argument into hexadecimal, x for lowercase, X for uppercase</td>
  </tr>
</table>
</details>
<div>
<details>

  <summary align="left"><h3 width="60">Examples of the function printf</h3></summary>
  
Compilation:
  
  ```c
  
  // You might want to look at the gcc flag -Wno-format when testing with your printf and the standard printf.
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

    len = _printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    _printf("Length:[%d, %i]\n", len, len);
    _printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Unsigned binary:[%b]\n", 98);
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    _printf("Unknown:[%r]\n");
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
Unsigned binary:[1100010]
Character:[H]
String:[I am a string !]
Percent:[%]
Len:[12]
Unknown:[%r]
```
</details>
</div>
</details>
</div>

----

<div>
<details>
<summary><h1>Files</h1></summary>
	
1. [ _printf.c ](#_printf.c)
	
2. [ main.h ](#main.h)
	
3. [ get_function.c ](#get_function.c)
	
4. [ normal_functions.c ](#normal_functions.c)

5. [ advance_functions.c ](#advance_functions.c)
	
6. [ print_number.c ](#print_number.c)

7. [ print_unsigned.c ](#print_unsigned.c)
	
8. [ print_rev.c ](#print_rev.c)

9. [ strlen.c ](#strlen.c)

10. [ _putchar.c ](#_putchar.c)
	
<details>
  <summary><h2>Flowchart</h2></summary>
	
  ![_printf](https://user-images.githubusercontent.com/77507773/229322781-d4ae822f-b3a0-469c-a363-37cfde1ec25b.png)
	
</details>

<a name="_printf.c"></a>
<h2><a href="https://github.com/Diego-Bonora/holbertonschool-printf/blob/master/_printf.c">_printf.c</a></h2>
	
This file contains the main code of the printf function.
Here we will loop in the format string looking for a special character, meanwhile printing all the normal characters using the get_function function of the _putchar for printing.
The function allways returns the number of characters printed or -1 if an error ocurres.
	
<pre> Prototype: int _printf(const char *format, ...);</pre>
	
---
	
<a name="main.h"></a>
	<h2><a href="https://github.com/Diego-Bonora/holbertonschool-printf/blob/master/main.h">main.h</a></h2>
this file has all the macros headers used by the functions, function prototypes and the structure.
	
```c
/**
 * struct format - structure for calling diferent functions
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct format
{
	char op;
	int (*f)(va_list ap, int *total);
} format_t;
```

<a name="get_function.c"></a>
<h2><a href="https://github.com/Diego-Bonora/holbertonschool-printf/blob/master/get_function.c">get_function.c</a></h2>
This file contains the function that will return the function needed to print the required format using a structrure that contains the format flags and their respective functions.
	
<pre> Prototype: int (*get_function(char format))(va_list ap, int *total);</pre>

<a name="normal_functions.c"></a>
<h2><a href="https://github.com/Diego-Bonora/holbertonschool-printf/blob/master/normal_functions.c">normal_functions.c</a></h2>
This file contains several functions used to print some of the type of arguments that can be sent to the _printf.

<ul>
	<li>[<b> c </b>] <br> This function prints a character passed by an argument. <pre> Prototype: int printf_c(va_list ap, int *total); </pre></li>
	<li>[<b> s </b>] <br> This function prints a character string passed by an argument. <pre> Prototype: int printf_s(va_list ap, int *total);</pre></li>
	<li>[<b> % </b>] <br> This function prints a '%' sign. <pre> Prototype: int printf_same(va_list ap, int *total);</pre></li>
	<li>[<b> d - i </b>] <br> This function calls print_number to print the int passed by the argument, this function works with both flags, 'i' and 'd'. <pre> Prototype: int printf_d(va_list ap, int *total);</pre></li>
	<li>[<b> u </b>] <br> This function calls print_unsigned_num to print the unsigned int passed by the argument. <pre> Prototype: int printf_u(va_list ap, int *total);</pre></li>
</ul>

<a name="advance_functions.c"></a>
<h2><a href="https://github.com/Diego-Bonora/holbertonschool-printf/blob/master/advance_functions.c">advance_functions.c</a></h2>
This file contains more functions used to print other type of arguments that can be sent to the _printf.

<ul>
	<li>[<b> b </b>] <br> This function converts an unsigned int into binary and prints it. <pre> Prototype: int printf_b(va_list ap, int *total); </pre></li>
	<li>[<b> o </b>] <br> This function converts an unsigned int into octal and prints it. <pre> Prototype: int printf_o(va_list ap, int *total); </pre></li>
	<li>[<b> h </b>] <br> This function converts an unsigned int into lower case hexadecimal and prints it. <pre> Prototype: int printf_h(va_list ap, int *total); </pre></li>
	<li>[<b> H </b>] <br> This function converts an unsigned int into upper case hexadecimal and prints it. <pre> Prototype: int printf_H(va_list ap, int *total); </pre></li>
</ul>

<a name="print_number.c"></a>
<h2><a href="https://github.com/Diego-Bonora/holbertonschool-printf/blob/master/print_number.c">print_number.c</a></h2>
This file contains the function used to convert integer numbers into string in reverse order using math and then uses another function to print it in reverse order.

<pre> Prototype: int print_number(int n, int len); </pre>

<a name="print_unsigned.c"></a>
<h2><a href="https://github.com/Diego-Bonora/holbertonschool-printf/blob/master/print_unsigned.c">print_unsigned.c</a></h2>
This file contains the function used to convert unsigned integer numbers into string in reverse order using math and then uses another function to print it in reverse order.

<pre> Prototype: int print_unsigned_num(unsigned int n, int len); </pre>
	
<a name="print_rev.c"></a>
<h2><a href="https://github.com/Diego-Bonora/holbertonschool-printf/blob/master/print_rev.c">print_rev.c</a></h2>
This file contains the function used to print a string in reverse order using the function _putchar.

<pre> Prototype: void print_rev(char *s); </pre>
	
<a name="strlen.c"></a>
<h2><a href="https://github.com/Diego-Bonora/holbertonschool-printf/blob/master/strlen.c">strlen.c</a></h2>
This file contains the function to get the lenght of a string, this is a handmade replica of the actual function strlen.

<pre> Prototype: int _strlen(char *s); </pre>
	
<a name="_putchar.c"></a>
<h2><a href="https://github.com/Diego-Bonora/holbertonschool-printf/blob/master/_putchar.c">_putchar.c</a></h2>
This file contains the function to print a simple character, this is a handmade replica of the actual function putchar.

<pre> Prototype: int _putchar(char c); </pre>

</details>
</div>

---

<footer>
<p align="left">Authors:<p>
<p align="left"><a href="https://github.com/Diego-Bonora" target="blank">Diego Bonora</a></p>
<p align="left"><a href="https://github.com/MarcosPerdomoVaz" target="blank">MarcosPerdomoVaz</a></p>
</footer>
