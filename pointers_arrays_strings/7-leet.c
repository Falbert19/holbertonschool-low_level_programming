#include <stdio.h>
#include "main.h"

/**
 * *leet
 * @s: char
 * Return: 0
 */

char *leet(char *s)
{
    char leet_map[256] = {0};
    leet_map['a'] = '4';
    leet_map['A'] = '4';
    leet_map['e'] = '3';
    leet_map['E'] = '3';
    leet_map['o'] = '0';
    leet_map['O'] = '0';
    leet_map['t'] = '7';
    leet_map['T'] = '7';
    leet_map['l'] = '1';
    leet_map['L'] = '1';

    for (int i = 0; s[i] != '\0'; i++)
	{
        if (leet_map[(unsigned char)s[i]] != 0) {
            s[i] = leet_map[(unsigned char)s[i]];
        }
    }
    return s;
}

int main() {
    char str[] = "LeetCode Algorithm!";
    printf("%s\n", leet(str));
    return 0;
}
