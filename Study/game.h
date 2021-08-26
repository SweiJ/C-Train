#pragma once
#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

// 初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

// 显示棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

// 玩家移动
void PlayerMove(char board[ROW][COL], int row, int col);

// 电脑玩家移动
void ComputerMove(char board[ROW][COL], int row, int col);

// 判断输赢
char IsWin(char board[ROW][COL], int row, int col);