#include "main.h"
#include <stdio.h>
/**
 * natural - a function that computes the sum of 3 and 5 multiplies
 * Return: 0
 */
void natural(void)
{
	int i = 1, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}
