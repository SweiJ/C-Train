#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
int main()
{
	int prime = 100;
	for (prime = 101; prime <= 200; prime+=2)
	{
		int i = 0;
		for (i = 2; i <= sqrt(prime); i++)
		{
			if (prime % i == 0)
				break;
		}
		if (i > sqrt(prime))
			printf("%d ", prime);
	}
	return 0;
}