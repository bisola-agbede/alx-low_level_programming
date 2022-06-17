#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 * @dest: first variable that holds strings to be concatenated
 * @src: second variable tha holds string to be concatenated
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
