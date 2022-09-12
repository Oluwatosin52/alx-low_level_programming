#include <stdio.h>
/**
 * main - it prints all possible different combination of  2-2 digits
 * Return: 0
 */
int main(void)
{
	int c = 0, d = 0;

	for (c = 1; c <= 99; c++)
	{
		d = c;
		for (d = 1; d <= 99; d++)
		{
			if (d != c)
			{
				putchar((c / 10) + 0);
				putchar((c % 10) + 0);
				putchar(' ');
				putchar((d / 10) + 0);
				putchar((d % 10) + 0);

				if (c != 98 || d != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
