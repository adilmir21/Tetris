#include"Square.h"
void Square::square(int&i,int&j, char s[23][15])
{

	j = 0;
	int limit = 308;//232
	while (i <= limit)
	{
		char c = getKey();
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
		if (j >= 91)
		{
			//j = 0; //if piece exceeds bounds;
			j -= 2;
		}
		if (j < (-100))
		{
			//j = 0;
			j += 2;
		}
		int k = j + 100,m;
		k = k / 13;
		float q = i / 14;
		m = q;   
		if (s[m + 2][k] == 'x')
		{
			limit = i;
			break;
		}
		if (s[m + 2][k + 1] == 'x')
		{
			limit = i;
			break;
		}
		if (s[m + 2][k - 1] == 'x')
		{
			limit = i;
			break;
		}
		drawRectangle(140 + j, 32 + i, 155 + j, 47 + i, 255, 255, 255, 255, 216, 0);
		drawRectangle(155 + j, 32 + i, 170 + j, 47 + i, 255, 255, 255, 255, 216, 0);
		drawRectangle(140 + j, 47 + i, 155 + j, 62 + i, 255, 255, 255, 255, 216, 0);
		drawRectangle(155 + j, 47 + i, 170 + j, 62 + i, 255, 255, 255, 255, 216, 0);
		

		delay(30);
		//delay(10);
		drawRectangle(140 + j, 32 + i, 155 + j, 47 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(155 + j, 32 + i, 170 + j, 47 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(140 + j, 47 + i, 155 + j, 62 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(155 + j, 47 + i, 170 + j, 62 + i, 0, 0, 0, 0, 0, 0);

		i += 1;

	}
	if (i >= (limit - 2) && i <= (limit + 4))
	{
		drawRectangle(140 + j, 32 + i, 155 + j, 47 + i, 255, 255, 255, 255, 216, 0);
		drawRectangle(155 + j, 32 + i, 170 + j, 47 + i, 255, 255, 255, 255, 216, 0);
		drawRectangle(140 + j, 47 + i, 155 + j, 62 + i, 255, 255, 255, 255, 216, 0);
		drawRectangle(155 + j, 47 + i, 170 + j, 62 + i, 255, 255, 255, 255, 216, 0);
		int f = j + 100,y;
		f = f / 13;
		float q = i / 14;
		y = q;
		/*if (f == 0)
		{
			f = 1;
		}*/
		if (f > 13)
		{
			f = 13;
		}
		int g = f - 2, count = 0;;
		for (int k = 0; k < 25; k++)
		{
			for (int l = f; l < f+1; l++)
			{
				if (k == y)
				{
					if (count == 0)
					{
						s[k][l] = 'x';
						s[k][l + 1] = 'x';
						s[k + 1][l] = 'x';
						s[k + 1][l + 1] = 'x';
					}
					//for (int d = y - 1; d < y; d++)
					//{
					//	//space[d][l] = 'x';
					//	s[d][l] = 'x';
					//}
					////space[k][l] = 'x';
					//s[k][l] = 'x';
				}
			}
		}
		
	}
}
void Square::print()
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