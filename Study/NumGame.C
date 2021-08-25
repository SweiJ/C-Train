#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menu()
{
	printf("************************\n");
	printf("******** 1.paly ********\n");
	printf("******** 0.exit ********\n");
	printf("************************\n");
}
int game()
{
	int guess = 0;
	int ret = rand() % 100+1; // 固定随机数的范围 1-100
	
	while (1)
	{
		printf("猜数字>");
		scanf("%d", &guess);
		if (guess < ret)
			printf("猜小了\n");
		else if (guess > ret)
			printf("猜大了\n");
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("输入数字>");
		scanf("%d", &input);
		switch (input)
		{
			case 1: game(); break;
			case 0: printf("退出游戏\n"); break;
			default: printf("选择错误，重新选择"); break;
		}
	} while (input);
	
}