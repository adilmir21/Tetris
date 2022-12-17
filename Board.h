#pragma once
#include<iostream>
using namespace std;
//#include"mygraphics.h"
class Board
{
protected:
	char board[16][16];
	int w = 30,h=30;
public:
	Board();
	void gamerules();
	void boardbuild();
	~Board()
	{
		for (int i = 0; i < 16; i++)
		{
			for (int j = 0; j < 1; j++)
			{
				board[i][j] = '\0';
			}
		}
		w = h = 0;
	}
};