#include "3-calc.h"

/**
 * op_add -  sum
 * Description: calculates teh sum of two numbers
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference
 * description - calculates the difference of two numbers
 * @a: first number
 * @b: second numbr
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product
 * Description - calculates the product of two numbers
 * @a: first number
 * @b: second number
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - quotient
 * Description - calculates the quotient of two numbers
 * @a: first number
 * @b: second number
 * Return: the quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - mdoulua
 * Description - calculates the remainder of the
 * division of two numbers
 * @a: first number
 * @b: second number
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
