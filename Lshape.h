#pragma once
#include"Piece.h"
#include"mygraphics.h"
class L : public Piece
{
public:
	int b = 1;
	void lshape(int&, int&, char [23][15]);
	void rotatel(int&, int&, char[23][15]);
	void l2shape(int&, int&, char[23][15]);
	void rotatel2(int&, int&, char[23][15]);
	void print();
	~L()
	{
		b = 0;
	}
};