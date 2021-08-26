#pragma once
#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

// ��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

// ��ʾ����
void DisplayBoard(char board[ROW][COL], int row, int col);

// ����ƶ�
void PlayerMove(char board[ROW][COL], int row, int col);

// ��������ƶ�
void ComputerMove(char board[ROW][COL], int row, int col);

// �ж���Ӯ
char IsWin(char board[ROW][COL], int row, int col);