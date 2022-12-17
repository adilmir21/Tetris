#include"Snakeshape.h"
void Snake::rightsnake(int& i, int& j, char s[23][15])
{
	j = 0;
	int limit = 308;//234
	while (i <= limit)
	{
		char c = getKey();
		if (c == 'a')
		{
			Snake::rightrotate(i, j,s);
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
		if (j >= 78)
		{
			//j = 0; //if piece exceeds bounds;
			j -= 2;
		}
		if (j < (-100))
		{
			//j = 0;
			j += 2;
		}
		int f = j + 100, y;
		f = f / 12;
		float q = i / 14;
		y = q;
		if (s[y + 2][f] == 'x')
		{
			limit = i;
			break;
		}
		if (s[y + 2][f + 1] == 'x')
		{
			limit = i;
			break;
		}
		if (s[y + 2][f - 1] == 'x')
		{
			limit = i;
			break;
		}
	/*	if (s[y + 2][f + 2] == 'x')
		{
			limit = i;
			break;
		}
		if (s[y + 2][f - 2] == 'x')
		{
			limit = i;
			break;
		}*/

		drawRectangle(155 + j, 32 + i, 170 + j, 47 + i, 255, 255, 255, 0, 255, 33);
		drawRectangle(170 + j, 32 + i, 185 + j, 47 + i, 255, 255, 255, 0, 255, 33);
		drawRectangle(155 + j, 47 + i, 170 + j, 62 + i, 255, 255, 255, 0, 255, 33);
		drawRectangle(140 + j, 47 + i, 155 + j, 62 + i, 255, 255, 255, 0, 255, 33);


		delay(30);
		//delay(10);
		drawRectangle(155 + j, 32 + i, 170 + j, 47 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(170 + j, 32 + i, 185 + j, 47 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(155 + j, 47 + i, 170 + j, 62 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(140 + j, 47 + i, 155 + j, 62 + i, 0, 0, 0, 0, 0, 0);

		i += 1;

	}
	if (i >= limit && i <= (limit+2))
	{
		drawRectangle(155 + j, 32 + i, 170 + j, 47 + i, 255, 255, 255, 0, 255, 33);
		drawRectangle(170 + j, 32 + i, 185 + j, 47 + i, 255, 255, 255, 0, 255, 33);
		drawRectangle(155 + j, 47 + i, 170 + j, 62 + i, 255, 255, 255, 0, 255, 33);
		drawRectangle(140 + j, 47 + i, 155 + j, 62 + i, 255, 255, 255, 0, 255, 33);
		int f = j + 100, y;
		f = f / 12;
		float q = i / 14;
		y = q;
		int count = 0;
		if (f == 0 )
		{
			f = 1;
		}
		int g = f-2;
		if (f > 13)
		{
			f = 13;
		}
		
		for (int k = 0; k < 23; k++)
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
						s[k + 1][l - 1] = 'x';
						//for (int d = y - 1; d < y; d++)
						//{
						//	//space[d][l] = 'x';
						//	s[d][l] = 'x';
						//	
						//}
						//
						////space[k][l - 1] = 'x';
						//s[k][l - 1] = 'x';
						count++;
					}
				}
			}
		}
	}
}
void Snake::leftsnake(int& i, int& j, char s[23][15])
{
	j = 0;
	int limit = 308; //234;
	while (i <= limit)
	{
		char c = getKey();
		if (c == 'a')
		{
			Snake::leftrotate(i, j,s);
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
		if (j >= 78)
		{
			//j = 0; //if piece exceeds bounds;
			j -= 2;
		}
		if (j < (-100))
		{
			//j = 0;
			j += 2;
		}
		int f = j + 100, y;
		f = f / 12;
		float q = i / 14;
		y = q;
		if (s[y + 2][f] == 'x')
		{
			limit = i;
			break;
		}
		if (s[y + 2][f + 1] == 'x')
		{
			limit = i;
			break;
		}
		if (s[y + 2][f - 1] == 'x')
		{
			limit = i;
			break;
		}
		drawRectangle(140 + j, 32 + i, 155 + j, 47 + i, 255, 255, 255, 255, 0, 0);
		drawRectangle(155 + j, 32 + i, 170 + j, 47 + i, 255, 255, 255, 255, 0, 0);
		drawRectangle(155 + j, 47 + i, 170 + j, 62 + i, 255, 255, 255, 255, 0, 0);
		drawRectangle(170 + j, 47 + i, 185 + j, 62 + i, 255, 255, 255, 255, 0, 0);


		delay(30);
		//delay(10);
		drawRectangle(140 + j, 32 + i, 155 + j, 47 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(155 + j, 32 + i, 170 + j, 47 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(155 + j, 47 + i, 170 + j, 62 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(170 + j, 47 + i, 185 + j, 62 + i, 0, 0, 0, 0, 0, 0);

		i += 1;

	}
	if (i >= limit && i <= (limit+2))
	{
		drawRectangle(140 + j, 32 + i, 155 + j, 47 + i, 255, 255, 255, 255, 0, 0);
		drawRectangle(155 + j, 32 + i, 170 + j, 47 + i, 255, 255, 255, 255, 0, 0);
		drawRectangle(155 + j, 47 + i, 170 + j, 62 + i, 255, 255, 255, 255, 0, 0);
		drawRectangle(170 + j, 47 + i, 185 + j, 62 + i, 255, 255, 255, 255, 0, 0);
		int f = j + 100, y;
		f = f / 12;
		float q = i / 14;
		y = q;
		int count = 0;
		if (f == 0)
		{
			f = 1;
		}
		if (f > 13)
		{
			f = 13;
		}
		int g = f - 2;

		for (int k = 0; k < 23; k++)
		{
			for (int l = f; l < f+1; l++)
			{
				if (k == y)
				{
					if (count == 0)
					{
						s[k][l] = 'x';
						s[k][l - 1] = 'x';
						s[k + 1][l] = 'x';
						s[k + 1][l + 1] = 'x';
						//for (int d = y - 1; d < y; d++)
						//{
						//	//space[d][l] = 'x';
						//	s[d][l] = 'x';

						//}

						////space[k][l+1] = 'x';
						//s[k][l + 1] = 'x';
						count++;
					}
				}
			}
		}
	}
}
void Snake::rightrotate(int& i, int& j, char s[23][15])
{
	j = 0;
	int limit = 308;//
	while (i <= limit)
	{
		char c = getKey();
		if (c == 'b')
		{
			Snake::rightsnake(i, j,s);
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
		if (j >= 92)
		{
			//j = 0; //if piece exceeds bounds;
			j -= 2;
		}
		if (j < (-100))
		{
			//j = 0;
			j += 2;
		}
		int f = j + 100, y;
		f = f / 13;
		float q = i / 14;
		y = q;
		if (s[y + 2][f] == 'x')
		{
			limit = i;
			break;
		}
		else if (s[y + 2][f+1] == 'x')
		{
			limit = i;
			break;
		}
		else if (s[y + 2][f-1] == 'x')
		{
			limit = i;
			break;
		}
		else if (s[y + 3][f] == 'x')
		{
			limit = i;
			break;
		}
		if (s[y + 3][f + 1] == 'x')
		{
			limit = i;
			break;
		}
		if (s[y + 3][f - 1] == 'x')
		{
			limit = i;
			break;
		}
		//if (s[y + 2][f + 2] == 'x')
		//{
		//	limit = i;
		//	break;
		//}
		//if (s[y + 2][f - 2] == 'x')
		//{
		//	limit = i;
		//	break;
		//}
		drawRectangle(140 + j, 19 + i, 155 + j, 34 + i, 255, 255, 255, 0, 255, 33);
		drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 255, 255, 255, 0, 255, 33);
		drawRectangle(155 + j, 34 + i, 170 + j, 49 + i, 255, 255, 255, 0, 255, 33);
		drawRectangle(155 + j, 49 + i, 170 + j, 64 + i, 255, 255, 255, 0, 255, 33);

		
		delay(30);
		//delay(10);
		drawRectangle(140 + j, 19 + i, 155 + j, 34 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(155 + j, 34 + i, 170 + j, 49 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(155 + j, 49 + i, 170 + j, 64 + i, 0, 0, 0, 0, 0, 0);

		i += 1;

	}
	if (i >= (limit-2) && i <= (limit+2))
	{
		drawRectangle(140 + j, 19 + i, 155 + j, 34 + i, 255, 255, 255, 0, 255, 33);
		drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 255, 255, 255, 0, 255, 33);
		drawRectangle(155 + j, 34 + i, 170 + j, 49 + i, 255, 255, 255, 0, 255, 33);
		drawRectangle(155 + j, 49 + i, 170 + j, 64 + i, 255, 255, 255, 0, 255, 33);
		int f = j + 100, y;
		f = f / 13;
		float q = i / 14;
		y = q;
		int count = 0;
		if (f == 0)
		{
			f = 1;
		}
		if (f > 13)
		{
			f = 13;
		}
		int g = f - 2;
		for (int k = 0; k < 23; k++)
		{
			for (int l = f; l < f+1; l++)
			{
				if (k == y)
				{
					if (count == 0)
					{
						s[k][l] = 'x';
						s[k+1][l] = 'x';
						s[k+1][l + 1] = 'x';
						s[k+2][l+1] = 'x';
						/*for (int d = y - 1; d < y; d++)
						{
							s[d - 1][l] = 'x';
							s[d][l] = 'x';
							s[d][l + 1] = 'x';
						}
						s[k][l + 1] = 'x';*/
						count++;
					}
				}
			}
		}

	}
}
void Snake::leftrotate(int& i, int& j,char s[23][15])
{
	j = 0;
	int limit = 308;// 219;
	while (i <= limit)
	{
		char c = getKey();
		if (c == 'b')
		{
			Snake::leftsnake(i, j,s);
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
		if (j >= 92)
		{
			//j = 0; //if piece exceeds bounds;
			j -= 2;
		}
		if (j < (-100))
		{
			//j = 0;
			j += 2;
		}
		int f = 100 + j, y;
		f = f / 13;
		float q = i / 14;
		y = q;
		
		if (s[y + 3][f] == 'x')
		{
			limit = i;
			break;
		}
		if (s[y + 3][f + 1] == 'x')
		{
			limit = i;
			break;
		}
		if (s[y + 3][f - 1] == 'x')
		{
			limit = i;
			break;
		}
		/*if (s[y + 2][f + 2] == 'x')
		{
			limit = i;
			break;
		}
		if (s[y + 2][f - 2] == 'x')
		{
			limit = i;
			break;
		}*/
		drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 255, 255, 255, 255, 0, 0);
		drawRectangle(155 + j, 34 + i, 170 + j, 49 + i, 255, 255, 255, 255, 0, 0);
		drawRectangle(155 + j, 19 + i, 170 + j, 34 + i, 255, 255, 255, 255, 0, 0);
		drawRectangle(140 + j, 49 + i, 155 + j, 64 + i, 255, 255, 255, 255, 0, 0);
		
		delay(30);
		//delay(10);
		drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(155 + j, 34 + i, 170 + j, 49 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(155 + j, 19 + i, 170 + j, 34 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(140 + j, 49 + i, 155 + j, 64 + i, 0, 0, 0, 0, 0, 0);

		i += 1;

	}
	if (i >= (limit-3) && i <= (limit+1))
	{
		drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 255, 255, 255, 255, 0, 0);
		drawRectangle(155 + j, 34 + i, 170 + j, 49 + i, 255, 255, 255, 255, 0, 0);
		drawRectangle(155 + j, 19 + i, 170 + j, 34 + i, 255, 255, 255, 255, 0, 0);
		drawRectangle(140 + j, 49 + i, 155 + j, 64 + i, 255, 255, 255, 255, 0, 0);
		int f = 100+ j, y;
		f = f / 13;
		float q = i / 14;
		y = q;
		if (f == 0)
		{
			f = 1;
		}
		if (f > 13)
		{
			f = 13;
		}
		int g = f - 2, count = 0;
		for (int k = 0; k < 23; k++)
		{
			for (int l = f; l < f+1; l++)
			{
				if (k == y)
				{
					if (count == 0)
					{
						s[k][l + 1] = 'x';
						s[k+1][l] = 'x';
						s[k+1][l + 1] = 'x';
						s[k+2][l] = 'x';
						//for (int d = y - 1; d < y; d++)
						//{
						//	/*space[d-1][l+1] = 'x';
						//	space[d][l] = 'x';
						//	space[d][l + 1] = 'x';*/
						//	s[d - 1][l + 1] = 'x';
						//	s[d][l] = 'x';
						//	s[d][l + 1] = 'x';
						//}
						////space[k][l] = 'x';
						//s[k][l] = 'x';
						count++;
					}
				}
			}
		}


	}
}
void Snake::print()
{
	for (int i = 0; i < 23; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			cout << space[i][j];
		}
		cout << endl;
	}
}
