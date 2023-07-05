#include<stdio.h>

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                 the alphabet a - z
*/

int main()
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		putchar(ch);
	putchar('\n');
	return 0;
}
