#include"Board.h"
#include"mygraphics.h"
#include<string>
Board::Board()
{
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Board::gamerules()
{
	/*cls();
	gotoxy(50,1);
	cout << " * GAME RULES* ";
	gotoxy(48, 2);
	cout << " Press a to Rotate Shape ";
	gotoxy(48, 3);
	cout << " Press b to Move Back to Previous Shape ";
	gotoxy(48, 4);
	cout << " Press Right Arrow Key to Move Right ";
	gotoxy(48, 5);
	cout << " Press Left Arrow Key to Move Left";
	gotoxy(48, 6);
	cout << " Press Down Arrow Key to Move Downwards Fast";*/
	cout << "\t\t\t\t\t\t * GAME RULES* \n";
	cout << "\t\t\t\t\t\t Press a to Rotate Shape \n";
	cout << "\t\t\t\t\t\t Press b to Move Back to Previous Shape \n";
	cout << "\t\t\t\t\t\t Press Right Arrow Key to Move Right\n ";
	cout << "\t\t\t\t\t\t Press Left Arrow Key to Move Left\n";
	cout << "\t\t\t\t\t\t Press Down Arrow Key to Move Downwards Fast\n";

}

void Board::boardbuild()
{
	int w = 30, h = 30;
	//getWindowDimensions(w, h);
	ShowCursor(false);
	//cls();
	int i = 0, j = 1;
	gotoxy(0, 0);
	//Board::gamerules();
	while (i<=360)
	{
		drawRectangle(20, 12+i, 40, 33+i, 0, 0, 0, 255, 0, 0);
		i += 20;
	}
	i = 0;
	while (i<=220)
	{

		drawRectangle(20+i, 12, 40+i, 33, 0, 0, 0, 255, 0, 0);
		i += 20;
	}
	i = 0;
	while (i <= 360)
	{
		drawRectangle(260, 12 + i, 280, 33 + i, 0, 0, 0, 255, 0, 0);
		i += 20;
	}
	i = 0;
	while (i <= 220)
	{

		drawRectangle(20 + i, 372, 40 + i, 393, 0, 0, 0, 255, 0, 0);
		i += 20;
	}

	i = 0;
	
	i = 0 , j = 0;

	
}
