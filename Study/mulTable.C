#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

int main()
{
	int i, j, mul, num;
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d * %d = %d  ", j, i, i * j);
		}
		printf("\n");
	}
}