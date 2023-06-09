#include "main.h"

/**
 * _pow_recursion - function with two arguments
 * owned by soumimoon
 * @x: int type 1st argument
 * @y: int type 2nd argument
 * Description: returns the value of x raised to power of y
 * Return: the power
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
