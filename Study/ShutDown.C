#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input[20] = { 0 };
	system("shutdown -s -t 60");

	while (1)
	{
		printf("请注意，你的电脑将在1分钟之后关机，输入：我是猪 即可解除\n");
		scanf("%s", input);
		if (0 == strcmp(input, "我是猪"))
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}