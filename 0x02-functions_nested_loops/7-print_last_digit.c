#include "holberton.h"
#include "main.h"
/**
 *  * print_last_digit - prints the last digit of a number
 *   *@n: number being tested
 *    * Return: Always 0.
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
