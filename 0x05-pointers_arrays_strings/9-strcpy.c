#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strcpy - Copies the string pointed to by src
* including the terminating null byte \0
* to the buffer pointed to by dest
*@dest: destination
*@src: source
*Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
