#include "holberton.h"
#include "main.h"
/**
 *  *_islower - checks for a lowercase character
 *   *@c: letter being tested
 *    * Return: Always 0
 */

int _islower(int c)
{

		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
			return (0);
}
