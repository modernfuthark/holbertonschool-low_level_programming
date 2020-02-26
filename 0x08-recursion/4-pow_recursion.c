#include "holberton.h"
/**
 * _pow_recursion - Find x to the power of y
 * @x: Base
 * @y: Radical
 * Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{
	int end;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	end = _pow_recursion(x, (y - 1));
	return (end * x);
}
