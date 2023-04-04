#ifndef MAIN_H
#define MAIN_H

void set_string(char **s, char *to);
int _putchar(char c);
void print_diagsums(int a*, int size);
char *_memset(char *s, char b, unsigned int n);
unsigned int _strspn(char *s, char *accept);
char *_memcpy(char *dest, char *src, unsigned int n);
void print_chessboard(char (*a)[8]);
char *_strstr(char *haystack, char *needle);
char *strpbrk(char *s, char *accept);
char *_strchr(char *s, char c);

#endif
