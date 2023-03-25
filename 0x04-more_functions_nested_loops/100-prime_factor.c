#include <stdio.h>
#include <limits.h>
int main(void)
{
	int isPrime;
	long num = 612852475143, max = INT_MAX, i, j;

    for (i = 2; i <= num; i++)
    {
	    if (num % i == 0)
	    {
		    isPrime = 1;
		    for (j = 2; j <= i / 2; j++)
		    {
			    if (i % j == 0)
			    {
				    isPrime = 0;
				    break;
			    }
		    }
		    if (isPrime == 1)
		    {
			  if (i >= max)
			  {
				  max = i;
			  }
		    }
	    }
    }
    printf("%ld\n", max);
    return 0;
}
