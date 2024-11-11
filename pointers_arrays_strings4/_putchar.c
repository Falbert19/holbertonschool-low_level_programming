#include <unistd.h>

/**
 * putchar - write cha c to stdout
 * @c: the char to pr
 * Return: On success 1.
 * On error, -1 is returned, errno is set aprrope
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
