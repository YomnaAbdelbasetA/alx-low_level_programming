#include <stdio.h>
/**
* main-A program that prints all the alphabet execluding q and e
* Return: 0 (Success)
*/
int main(void)
{
	int lowercase = 97;

	while (lowercase <= 122)
	{
		if (lowercase != 113 || lowercase != 101)
		{
		putchar((char)lowercase);
		}
		lowercase++;
	}
	putchar('\n');
	return (0);
}
