#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function for sum
 * @a: num1
 * @b: num2
 * Return: result of a + b
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - function to substract
 * @a: num1
 * @b: num2
 * Return: result of a - b
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - function to multiplicate
 * @a: num1
 * @b: num2
 * Return: result of a * b
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - function to division
 * @a: num1
 * @b: num2
 * Return: result of a / b
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - function to modulo
 * @a: num1
 * @b: num2
 * Return: result of a % b
 */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
