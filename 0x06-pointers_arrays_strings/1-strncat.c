#include "main.h"
char *_strncat(char *dest, char *src, int n)

{
int i, j;
i = 0;
while (dest[i] != '\0')
{
	i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';

return (dest);
}
