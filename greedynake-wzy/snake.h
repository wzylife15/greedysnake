#ifndef __SNAKE_H__
#define __SNAKE_H__
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<conio.h>
#include<Windows.h>

#define WIDE 60
#define HIGH 20
struct BODY
{
	int X;
	int Y;
};

struct SNAKE
{
	struct BODY body[WIDE*HIGH];
	int size;
} snake;
struct FOOD {
	int	X;
	int Y;
}food;
int score = 0;
int kx = 0;
int ky = 0;
int lastX = 0;
int lastY = 0;

int sleepSecond = 400;

void initSnake(void);
void initFOOD(void);
void initWall(void);
void initUI(void);
void playGame(void);
void showScore(void);
#endif