#include <stdio.h>
#include "main.h"
#include "_putchar.c"
/**
 *print_alphabet_x10 - function to print 10 times the alphabet
 * Return: Always 0
 */

/*int main(void)
{
print_alphabet_x10();
	return (0);
}
*/
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
