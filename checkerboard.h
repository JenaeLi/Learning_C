#define _CRT_SECURE_NO_WARNINGS 1
#ifndef __CHESSBOARD_H__
#define __CHESSBOARD_H__

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>



void menu();
void Game();
void Init(arr,rows,cols);
void Checkerboard(arr,rows,cols);
void Player(arr,rows,cols);
int Win_check(arr,rows,cols)
void Computer(arr,rows,cols);

#endif __CHESSBOARD_H__