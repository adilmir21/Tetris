#pragma once
#include"horizontal.h"
#include"mygraphics.h"
//horizontal::horizontal()
//{
//	int a = 0;
//}
void horizontal::s()
{
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			space[i][j] = ' ';
		}
	}
	for (int i = 0; i <= 25; i++)
	{
		wi[i] = 30;
	}
}
void horizontal::horizontalshape(int &i,int &j,int&z,char s[23][15])
{
	 
	
	int d, x = 0, limit = 320;// 320;
		j = 0,d=h;
		if (w < 2)
		{
			score += 100;
			w = 30;
		}
		
		while (i <= limit)
		{
			char c = getKey();
			if (c == 'a')
			{
				count++;
				horizontal::rotatehorizontal(i, j,s);
				break;
			}
			
			if (GetAsyncKeyState(VK_DOWN) != 0)
			{
				i += 2;
			}
			if (GetAsyncKeyState(VK_RIGHT) != 0)
			{
				j += 2; // moving right
			}
			if (GetAsyncKeyState(VK_LEFT) != 0)
			{
				j -= 2; // moving left
			}
			if (j >= 62)
			{
			//	j = 0; //if piece exceeds bounds;
				j -= 2;
			}
			if (j < (-100))
			{
				//j = 100;
				j += 2;
			}
			int k = 100 + j,m;
			k = k / 11;
			m = i / 14;
			if (s[m + 1][k] == 'x')
			{
				limit = i;
				break;
			}
			if (s[m + 1][k + 1] == 'x')
			{

				limit = i;
				break;
			}
			if (s[m + 1][k - 1] == 'x')
			{

				limit = i;
				break;
			}
			if (c == 'v')
			{
				i = limit;
				break;
			}
			drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 255, 255, 255, 0, 63, 255);
			drawRectangle(155 + j, 34 + i, 170 + j, 49 + i, 255, 255, 255, 0, 63, 255);
			drawRectangle(170 + j, 34 + i, 185 + j, 49 + i, 255, 255, 255, 0, 63, 255);
			drawRectangle(185 + j, 34 + i, 200 + j, 49 + i, 255, 255, 255, 0, 63, 255);
			//delay(10);
			delay(30);
			drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 0, 0, 0, 0, 0, 0);
			drawRectangle(155 + j, 34 + i, 170 + j, 49 + i, 0, 0, 0, 0, 0, 0);
			drawRectangle(170 + j, 34 + i, 185 + j, 49 + i, 0, 0, 0, 0, 0, 0);
			drawRectangle(185 + j, 34 + i, 200 + j, 49 + i, 0, 0, 0, 0, 0, 0);

			i += 1;
			
		}
		if (i >= (limit))
		{
			/*w = w - 9;*/
			drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 255, 255, 255, 0, 63, 255);
			drawRectangle(155 + j, 34 + i, 170 + j, 49 + i, 255, 255, 255, 0, 63, 255);
			drawRectangle(170 + j, 34 + i, 185 + j, 49 + i, 255, 255, 255, 0, 63, 255);
			drawRectangle(185 + j, 34 + i, 200 + j, 49 + i, 255, 255, 255, 0, 63, 255);
		//	w = w - 9;
			wi[max] -= 9;
			width(w);
			int f = j+100,y;
			f = f / 11;
			/*if ( f == 0|| f == 1 || f==2 || f==3 )
			{
				f += 4;
			}
			*/
			if (f > 11)
			{
				f = 11;
			}
			y = i / 14;
			int g = f-4;
			for (int k = 0; k < 25; k++)
			{
				for (int l = f; l < f+1; l++)
				{
					if (k == y)
						s[k][l] = s[k][l + 1] = s[k][l + 2] = s[k][l + 3] = 'x';
				}
			}
		}
	}
void horizontal::rotatehorizontal(int& i, int& j, char s[23][15])
{
	int z = 30;
	j = 0;
	int limit = 278;

	if (w <= 2)
	{
		score += 100;
	}
	while (i <= limit)   // 278
	{
		if (GetAsyncKeyState(VK_DOWN) != 0)
		{
			i += 2;
		}
		char e = getKey();
		if (e == 'b')
		{
			horizontal::horizontalshape(i, j,z,s);
			break;
		}
		if (e == 'v')
		{
			i = limit;
			break;
		}
		if (GetAsyncKeyState(VK_RIGHT) != 0)
		{
			j += 2; // moving right
		}
		if (GetAsyncKeyState(VK_LEFT) != 0)
		{
			j -= 2; // moving left
		}
		if (j >= 108)
		{
			//j = 0; //if piece exceeds bounds;
			j -= 2;
		}
		if (j < (-100))
		{
			j += 2;
		}
		int k = j + 100,m;
		float d = i / 12.5;
			k = k / 14;
			m = d;
			if (s[m + 1][k] == 'x')
			{
				limit = i;
				break;
			}

		drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 255, 255, 255, 0, 63, 255);
		drawRectangle(140 + j, 49 + i, 155 + j, 64 + i, 255, 255, 255, 0, 63, 255);
		drawRectangle(140 + j, 64 + i, 155 + j, 79 + i, 255, 255, 255, 0, 63, 255);
		drawRectangle(140 + j, 79 + i, 155 + j, 94 + i, 255, 255, 255, 0, 63, 255);
		delay(30);

		drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(140 + j, 49 + i, 155 + j, 64 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(140 + j, 64 + i, 155 + j, 79 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(140 + j, 79 + i, 155 + j, 94 + i, 0, 0, 0, 0, 0, 0);
		i += 1;
	}
	if (i >= (limit-4))  // 272
	{
		drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 255, 255, 255, 0, 63, 255);
		drawRectangle(140 + j, 49 + i, 155 + j, 64 + i, 255, 255, 255, 0, 63, 255);
		drawRectangle(140 + j, 64 + i, 155 + j, 79 + i, 255, 255, 255, 0, 63, 255);
		drawRectangle(140 + j, 79 + i, 155 + j, 94 + i, 255, 255, 255, 0, 63, 255);
	//	w = w - 1;
		int f = j + 100,y;
		f = f / 14;
		/*if (f < 14)
		{
			f += 1;
		}*/
		float q;
		q = i / 12.5;
		y = q;
		int g =f;
		/*if (f == 0 || f == 1 || f == 2 || f == 3)
		{
			s[y][0] = s[y][1] = s[y][2] = s[y][3] = 'x';
		}*/
		for (int k = 0; k < 25; k++)
		{
			for (int l = f; l < f+1; l++)
			{
				if (k == y)
					for (int b = k - 4; b <= k; b++)
					{
						s[b][l] = 'x';
					}
					
			}
		}

	}
}
void horizontal::print()
{
	for (int k = 18; k < 23; k++)
	{
		for (int l = 0; l < 14; l++)
		{
			cout << space[k][l];
		}
		cout << endl;
	}
}