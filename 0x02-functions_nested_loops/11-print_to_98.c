#include "holberton.h"
#include "main.h"
#include "stdio.h"
#include "6-abs.c"
/**
 *  * print_to_98 - print all the numbers between the provided number and 98
 *   * @n: integer to start at
 *    * Return: Void.
 */

void print_to_98(int n)

{
		int i = 0;

		if (n > 98)
		{
			for (i = n; i >= 98; i--)
			{
				printf("%d", i);
				if (i != 98)
				{
					printf(", ");
				}															}
		}
		else
		{
			for (i = n; i <= 98 ; i++)
			{
				printf("%d", i);
				if (i != 98)
				{
					printf(", ");																								}
			}
		}
					printf('\n');
}
