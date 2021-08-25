#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

int Num(int *a, int *b)
{
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	Num(&a, &b);
	printf("a = %d, b = %d", a, b);
}