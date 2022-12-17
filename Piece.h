#pragma once
#include<ctime>
#include<iostream>
using namespace std;
//#include"mygraphics.h"
class Piece
{
public:
	int w = 30, h = 25, wi[31], max = 25, w2 = 30, h2 = 25;
	void width(int& v)
	{
		this->w = v;
	}
	int score = 0;
	char space[25][14];
	void spaces()
	{
		this->w = 30;
		for (int i = 0; i <= 26; i++)
		{
			this->wi[i] = 30;
		}
	}
	
	virtual void horizontalshape(int&, int&,int&,char[23][15])
	{
		
	}
	virtual void rotatehorizontal(int&, int&)
	{

	}
	virtual void lshape(int&, int&)
	{

	}
	virtual void rotatel(int&, int&)
	{

	}
	virtual void l2shape(int&, int&)
	{

	}
	virtual void rotatel2(int&, int&)
	{

	}
	virtual void square(int&, int&)
	{

	}
	virtual void rightsnake(int&, int&)
	{

	}
	virtual void leftsnake(int&, int&)
	{

	}
	virtual void rightrotate(int&, int&)
	{

	}
	virtual void leftrotate(int&, int&)
	{

	}
	virtual void print()
	{

	}
	~Piece()
	{
		w = 0, h = 0, wi[0] = 0, max = 0, w2 = 0, h2 = 0;
	}
};