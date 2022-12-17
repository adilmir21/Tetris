#pragma once
#include"Piece.h"
#include"mygraphics.h"
class Square : public Piece
{
public:
	int v = 1;
	void square(int&,int&, char[23][15]);
	void print();
	~Square()
	{
		v = 0;
	}
};