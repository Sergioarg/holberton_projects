/* This file contains all the prototypes of the projects */

/* t0. t_strcat - function that concatenates two strings. */
char *_strcat(char *dest, char *src);
/* t1. _strncat - function that concatenates two strings. */
char *_strncat(char *dest, char *src, int n);
/* t2. _strncpy - function that copies a string. */
char *_strncpy(char *dest, char *src, int n);
/* t3. _strcmp - function compares two strings and returns 0 if both strings are identical. */
int _strcmp(char *s1, char *s2);
/* t4. reverse_array - function that reverses the content of an array of integers. */
void reverse_array(int *a, int n);
/* t5. string_toupper - function that changes all lowercase letters of a string to uppercase. */
char *string_toupper(char *str);
/* t6. cap_string - function that capitalizes all words of a string. */
char *cap_string(char *str);
/* t7. leet -  function that encodes a string into 1337. */
char *leet(char *);
/* t8. rot13 -  function that encodes a string using rot13. */
char *rot13(char *);

/* _putchar -  writes a character (an unsigned char) specified by the argument char to stdout. */
int _putchar(char c);
