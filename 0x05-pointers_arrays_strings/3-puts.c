#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string
 * @str: A pointer to an int that will be changed
 *
 * Description: prints a string
 * on success: returns no error
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar (10);
}
