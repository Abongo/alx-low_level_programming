include "3-calc.h"

int op_add(int k, int b);
int op_sub(int k, int b);
int op_mul(int k, int b);
int op_div(int k, int b);
int op_mod(int k, int b);

/**
 * op_add - Returns the sum of two numbers.
 * @k: The first number.
 * @b: The second number.
 *
 * Return: The sum of k and b.
 */
int op_add(int k, int b)
{
	return (k + b);
}
/**
 * op_sub - Returns the difference of two numbers.
 * @k: The first number.
 * @b: The second number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int k, int b)
{
	return (k - b);
}
/**
 * op_mul - Returns the product of two numbers.
 * @k: The first number.
 * @b: The second number.
 *
 * Return: The product of k and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The quotient of k and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of k by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

