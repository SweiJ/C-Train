#include "game.h"

void menu()
{
	printf("****************************\n");
	printf("********** 1.paly **********\n");
	printf("********** 0.exit **********\n");
	printf("****************************\n");
}
void game()
{
	char board[ROW][COL];

	InitBoard(board, ROW, COL);

	DisplayBoard(board, ROW, COL);

	char ret;
	while (1)
	{
		PlayerMove(board, ROW, COL); // 玩家下棋
		DisplayBoard(board, ROW, COL); // 打印棋盘
		ret = IsWin(board, ROW, COL); // 返回标志代码 ‘C’为继续 ‘Q’为平局 ‘*’为玩家赢 ‘#’为电脑赢
		if (ret != 'C')
			break;
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		
	}
	if (ret == '*')
		printf("玩家赢！\n");
	if (ret == '#')
		printf("电脑赢！\n");
	if (ret == 'Q')
		printf("平局！\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	menu();
	do
	{
		printf("请选择>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:	game(); break;
		case 0: printf("退出游戏！\n"); break;
		default: printf("选择错误！\n"); break;
		}
	} while (input);
}