#include "mine_Clearance.h"

void menu()
{
	printf("****************************\n");
	printf("********** 1.paly **********\n");
	printf("********** 0.exit **********\n");
	printf("****************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 }; // 安置好雷的信息
	char show[ROWS][COLS] = { 0 }; // 排查后雷的信息

	// 初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	
	// 布置雷
	SetMine(mine, ROW, COL);
	// 显示布置好雷的棋盘
	DisplayBoard(mine, ROW, COL);

	// 排雷
	FindMine(mine, show, ROW, COL);
	// 显示排雷附近的雷数
	DisplayBoard(show, ROW, COL);

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