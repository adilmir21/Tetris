#pragma once
#include<iostream>
using namespace std;
#include"horizontal.h"
#include"Lshape.h"
#include"Square.h"
#include"Snakeshape.h"
#include"Tshape.h"
class Random : public horizontal, L,Square,Snake,T
{
public:
	char d;
	void randomPiece(int& z)
	{
		int scor=0;
		gotoxy(50, 0);
	
		char s[27][15];
		int i = 0, j = 0, k = 0;
		for (i = 0; i < 27; i++)
		{
			for (j = 0; j < 15; j++)
			{
				s[i][j] = ' ';
			}
		}
		srand(time(NULL));
		int r;
		for (int k = 0; k < 10; k++)
		{
			//cout << " Score " << scor;
			r = rand() % 8;
			if (r == 0)
			{
				i = j = 0;
				horizontal::horizontalshape(i, j,z,s);
				scor += 20;
			}
			else if (r == 1)
			{
				i = j = 0;
				L::lshape(i, j,s);
				scor += 20;
			}
			else if (r == 2)
			{
				i = j = 0;
				L::l2shape(i,j,s);
				scor += 20;
			}
			else if (r == 3)
			{
				i = j = 0;
				Square::square(i,j,s);
				scor += 20;
			}
			else if (r == 4)
			{
				i = j = 0;
				Snake::rightsnake(i, j,s);
			}
			else if (r == 5)
			{
				i = j = 0;
				Snake::leftsnake(i, j,s);
				scor += 20;
			}
			else if (r == 6)
			{
				i = j = 0;
				T::t(i, j,s);
				scor += 20;
			}
			else if (r == 7)
			{
				i = j = 0;
				T::downward_t(i, j, s);
				scor += 20;
			}
		}
		cls();
	//	gotoxy(10, 2);
		//cout << " YOU LOSE ! " << endl;
		for (i = 0; i < 27; i++)
		{
			for (j = 0; j < 15; j++)
			{
				cout << s[i][j];
			}
			cout << endl;
		}
	}
	~Random()
	{
		d = '\0';
	}
};