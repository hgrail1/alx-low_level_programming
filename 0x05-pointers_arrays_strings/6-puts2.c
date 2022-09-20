#include "main.h"
#include "2-strlen.c"
/**
   * puts2 - prints every other character starting with the first
    * character, followed by a new line.
     * @str: the string to manipulate.
      *
       * Return: nothing.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
