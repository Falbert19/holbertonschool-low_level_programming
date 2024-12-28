#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the input string to be encoded
 *
 * Return: The encoded string
 */

char *leet(char *s)
{
	char *ptr = s;
	char letters[] = "aAeEoOtTlL";
	char replacements[] = "4433007711";
	int i;

	while (*ptr)
	{
		for (i = 0; letters[i] != '\0'; i++)
		{
			if (*ptr == letters[i])
			{
				*ptr = replacements[i];
				break;
			}
		}
		ptr++;
	}
	return s;
}

