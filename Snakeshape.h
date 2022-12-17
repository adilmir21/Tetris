#pragma once
#include"Piece.h"
#include"mygraphics.h"
class Snake : public Piece
{
public:
	int o = 1;
	void rightsnake(int&, int&, char[23][15]);
	void leftsnake(int&, int&, char[23][15]);
	void rightrotate(int&, int&, char[23][15]);
	void leftrotate(int&, int&, char[23][15]);
	void print();
	~Snake()
	{
		o = 0;
	}
};