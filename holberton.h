#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
char *t;
int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
char *memcpy(char *dest, char *src, unsigned int n);
int num_len(int num);
void *rev_string(char *s);
void format_p(va_list valist, char *buffer, int *index);
void format_lx(va_list valist, char *buffer, int *index);
void reset_buffer(char buffer[]);
void _write_buffer(char *buffer, int index);
int _strlen(char *s);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_u(va_list u);
int print_b(va_list b);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);

#endif  /* _HOLBERTON_H */
