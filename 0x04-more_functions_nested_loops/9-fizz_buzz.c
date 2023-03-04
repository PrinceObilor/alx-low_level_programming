#include "main.h"
#include <stdio.h>
/**
 * main - program that prints either number
 * or fizz or buzz or fizzBuzz
 *
 * Return: return 0
 */

int main(void)
{
	int num;

	while (num++ < 100)
		if ((num % 3 == 0) && (num % 5 == 0))
			printf("fizzBuzz ");
		else if ((num % 3) == 0)
			printf("fizz ");
		else if ((num % 5) == 0)
		{
			if (num != 100)
				printf("buzz ");
			else
				printf("buzz ");
		}
		else
			printf("%d ", num);
	printf("\n");
	return (0);
}
