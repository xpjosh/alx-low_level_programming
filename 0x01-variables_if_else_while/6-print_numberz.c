#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 * only using putchar and without char variables.
 *
 * Return: Always 0 (Success))
 */
int main(void)
{
	int d;

	for (d = 0; d <= 9; d++)
		putchar((num % 10) + '0');
	putchar("\n");
	return (0);
}
