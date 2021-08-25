#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

void is_leap(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		printf("%d是闰年！", year);
	else
		printf("%d不是闰年！", year);
}
int main()
{
	int year = 0;
	printf("请输入一个年份：");
	scanf("%d", &year);
	is_leap(year);
}