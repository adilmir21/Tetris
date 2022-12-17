#pragma once
#include"Piece.h"
#include"mygraphics.h"
class T : public Piece
{
public:
	int n = 1;
	void t(int&, int&, char s[23][15]);
	void right_t(int&, int&, char[23][15]);
	void downward_t(int&, int&, char[23][15]);
	void left_t(int&, int&, char[23][15]);
	void print();
	~T()
	{
		n = 0;
	}
};