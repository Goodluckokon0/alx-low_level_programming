<<<<<<< HEAD
#ifndef _MAIN_H_
#define _MAIN_H_
=======
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
>>>>>>> d7aaac4aeb89a7b0af2b12ce2de0297031fd8fd2

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
<<<<<<< HEAD
void _puts(char *s);
=======
void _puts(char *str);
>>>>>>> d7aaac4aeb89a7b0af2b12ce2de0297031fd8fd2
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
<<<<<<< HEAD
char *_memset(char *s, char c, unsigned int n);
=======
char *_memset(char *s, char b, unsigned int n);
>>>>>>> d7aaac4aeb89a7b0af2b12ce2de0297031fd8fd2
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

<<<<<<< HEAD
#endif
=======
#endif /* MAIN_H */
>>>>>>> d7aaac4aeb89a7b0af2b12ce2de0297031fd8fd2
