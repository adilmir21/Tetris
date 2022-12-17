#pragma once
#include<iostream>
#include"Piece.h"
using namespace std;

class horizontal : public Piece
{
public:
	int count = 0;
	void s();
	void print();
	 void horizontalshape(int&, int&,int&,char[23][15]);
	 void rotatehorizontal(int&, int&,char [23][15]);
	 ~horizontal()
	 {
		 count = 0;
	 }
};