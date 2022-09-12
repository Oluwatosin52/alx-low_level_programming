#include <stdio.h>
/**
 * main - program that prints all possible different combinations of  2-2 digits
 * Return: 0
 */
int main(void)
{
	int c = 0, d;

	while (c <= 99)
	{
		d = c;
		while (d <= 99)
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
			++d;
		}
		++c;
	}
	putchar('\n');
	return (0);
}
