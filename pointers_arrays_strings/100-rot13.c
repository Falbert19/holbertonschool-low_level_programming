#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: ``:Xinput string to be encoded
 *
 * Return: the encoded string
 */

char *rot13(char *s)
{
	char *ptr = s;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*ptr)
	{
		for (i = 0; alphabet[i] != '\0'; i++)
		{
			if (*ptr == alphabet[i])
			{
				*ptr = rot13[i];
				break;
			}
		}
		ptr++;
	}
	return (s);
}

