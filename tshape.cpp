#include"Tshape.h"
void T::t(int& i, int& j,char s[23][15])
{
	int limit = 308;
	j = 0;
	while (i <= limit)
	{
		char c = getKey();
		if (c == 'a')
		{
			T::right_t(i,j,s);
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
		if (j >= 76)
		{
			//	j = 0; //if piece exceeds bounds;
			j -= 2;
		}
		if (j < (-100))
		{
			//j = 100;
			j += 2;
		}
		int f = j + 100, y;
		f = f / 12;
		y = i / 14;
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

		drawRectangle(140 + j, 47 + i, 155 + j, 62 + i, 255, 255, 255, 87, 0, 127);
		drawRectangle(155 + j, 47 + i, 170 + j, 62 + i, 255, 255, 255, 87, 0, 127);
		drawRectangle(170 + j, 47 + i, 185 + j, 62 + i, 255, 255, 255, 87, 0, 127);
		drawRectangle(155 + j, 32 + i, 170 + j, 47 + i, 255, 255, 255, 87, 0, 127);
		//delay(10);
		delay(30);
		drawRectangle(140 + j, 47 + i, 155 + j, 62 + i, 0 , 0, 0, 0, 0, 0);
		drawRectangle(155 + j, 47 + i, 170 + j, 62 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(170 + j, 47 + i, 185 + j, 62 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(155 + j, 32 + i, 170+ j, 47 + i, 0, 0, 0, 0, 0, 0);
		i += 1;

	}
	if (i >= (limit-2))
	{
		drawRectangle(140 + j, 47 + i, 155 + j, 62 + i, 255, 255, 255, 87, 0, 127);
		drawRectangle(155 + j, 47 + i, 170 + j, 62 + i, 255, 255, 255, 87, 0, 127);
		drawRectangle(170 + j, 47 + i, 185 + j, 62 + i, 255, 255, 255, 87, 0, 127);
		drawRectangle(155 + j, 32 + i, 170 + j, 47 + i, 255, 255, 255, 87, 0, 127);
		int f = j + 100, y;
		f = f / 12;
		y = i / 14;
		if (f == 0)
		{
			f = 1;
		}
		if (f > 13)
		{
			f = 13;
		}
		int g = f - 3, count = 0;
		for (int k = 0; k < 23; k++)
		{
			for (int l = f; l < f+1; l++)
			{
				if (k == y)
				{
					if (count == 0)
					{
						s[k][l] = 'x';
						s[k + 1][l - 1] = s[k + 1][l] = s[k+1][l + 1] = 'x';
						/*for (int d = y - 1; d < y; d++)
						{
							s[d][l + 1] = 'x';
						}*/
						count++;
					}
					//s[k][l] = 'x';
				}
			}
		}

	}
}
void T::right_t(int& i, int& j, char s[23][15])
{
	j = 0;
	int limit = 292;
	while (i <= limit)
	{
		char c = getKey();
		if (c == 'b')
		{
			T::right_t(i, j, s);
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
			//	j = 0; //if piece exceeds bounds;
			j -= 2;
		}
		if (j < (-100))
		{
			//j = 100;
			j += 2;
		}
		int f = j + 100, y, count = 0;
		f = f / 13;
		y = i / 13;
		if (s[y + 1][f] == 'x')
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
		drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 255, 255, 255, 87, 0, 127);
		drawRectangle(140 + j, 49 + i, 155 + j, 64 + i, 255, 255, 255, 87, 0, 127);
		drawRectangle(140 + j, 64 + i, 155 + j, 79 + i, 255, 255, 255, 87, 0, 127);
		drawRectangle(155 + j, 49 + i, 170 + j, 64 + i, 255, 255, 255, 87, 0, 127);
		//delay(10);
		delay(30);
		drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(140 + j, 49 + i, 155 + j, 64 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(140 + j, 64 + i, 155+ j, 79 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(155 + j, 49 + i, 170 + j, 64 + i, 0, 0, 0, 0, 0, 0);
		i += 1;

	}
	for (int k = 1; k < 2; k++)
	{
		if (i >= (limit-4))
		{
			drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 255, 255, 255, 87, 0, 127);
			drawRectangle(140 + j, 49 + i, 155 + j, 64 + i, 255, 255, 255, 87, 0, 127);
			drawRectangle(140 + j, 64 + i, 155 + j, 79 + i, 255, 255, 255, 87, 0, 127);
			drawRectangle(155 + j, 49 + i, 170 + j, 64 + i, 255, 255, 255, 87, 0, 127);
			
			int f = j + 100, y, count = 0;
			f = f / 13;
			y = i / 13;
			if (f >13)
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
							s[k][l] = s[k + 1][l] = s[k + 1][l + 1] = s[k + 2][l] = 'x';
							//for (int d = y - 2; d <= y; d++)
							//{
							//	//space[d][l] = 'x';
							//	s[d][l] = 'x';

							//}
							////space[k-1][l + 1] = 'x';
							//s[k - 1][l + 1] = 'x';
							count++;
						}
					}
				}
			}
			break;
		}
	}
}
void T::downward_t(int& i, int& j, char s[23][15])
{
	int limit = 306;
	j = 0;
	while (i <= limit)
	{
		char c = getKey();
		if (c == 'a')
		{
			T::left_t(i, j, s);
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
			//	j = 0; //if piece exceeds bounds;
			j -= 2;
		}
		if (j < (-100))
		{
			//j = 100;
			j += 2;
		}
		int f = j + 100, y;
		f = f / 12;
		float q = i / 13.5;
		y = q;
		if (s[y + 1][f] == 'x')
		{
			limit = i;
			break;
		}
		if (s[y + 1][f + 1] == 'x')
		{
			limit = i;
			break;
		}
		if (s[y + 1][f - 1] == 'x')
		{
			limit = i;
			break;
		}
		if (s[y + 2][f] == 'x')
		{
			limit = i;
			break;
		}
		if (s[y + 2][f - 1] == 'x')
		{
			limit = i;
			break;
		}
		if (s[y + 1][f + 1] == 'x')
		{
			limit = i;
			break;
		}

		drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 255, 255, 255, 87, 0, 127);
		drawRectangle(155 + j, 34 + i, 170 + j, 49 + i, 255, 255, 255, 87, 0, 127);
		drawRectangle(170 + j, 34 + i, 185 + j, 49 + i, 255, 255, 255, 87, 0, 127);
		drawRectangle(155 + j, 49 + i, 170 + j, 64 + i, 255, 255, 255, 87, 0, 127);
		//delay(10);
		delay(30);
		drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(155 + j, 34 + i, 170 + j, 49 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(170 + j, 34 + i, 185 + j, 49 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(155 + j, 49 + i, 170 + j, 64 + i, 0, 0, 0, 0, 0, 0);
		i += 1;

	}
	if (i >= (limit))
	{
		drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 255, 255, 255, 87, 0, 127);
		drawRectangle(155 + j, 34 + i, 170 + j, 49 + i, 255, 255, 255, 87, 0, 127);
		drawRectangle(170 + j, 34 + i, 185 + j, 49 + i, 255, 255, 255, 87, 0, 127);
		drawRectangle(155 + j, 49 + i, 170 + j, 64 + i, 255, 255, 255, 87, 0, 127);
		int f = j + 100, y;
		f = f / 12;
		float q = i / 13.5;
		y = q;
		int g = f - 3, count = 0;
		if (f == 0)
		{
			f = 1;
		}
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
					
						//for (int d = y - 1; d < y; d++)
						//{
						//	//space[d][l] = 'x';
						//	s[d][l] = 'x';
						//}
						if (count == 0)
						{
							//space[k][l+1] = 'x';
							s[k][l]=s[k][l+1]=s[k][l-1]=s[k+1][l] = 'x';
							count++;
						}
				}
			}
		}
	}
}
void T::left_t(int& i, int& j, char s[23][15])
{
	int limit = 290;
	j = 0;
	while (i <= limit)
	{
		char c = getKey();
		if (c == 'b')
		{
			T::downward_t(i, j, s);
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
			//	j = 0; //if piece exceeds bounds;
			j -= 2;
		}
		if (j < (-100))
		{
			//j = 100;
			j += 2;
		}

		drawRectangle(155 + j, 34 + i, 170 + j, 49 + i, 255, 255, 255, 87, 0, 127);
		drawRectangle(155 + j, 49 + i, 170 + j, 64 + i, 255, 255, 255, 87, 0, 127);
		drawRectangle(155 + j, 64 + i, 170 + j, 79 + i, 255, 255, 255, 87, 0, 127);
		drawRectangle(140 + j, 49 + i, 155 + j, 64 + i, 255, 255, 255, 87, 0, 127);
		//delay(10);
		delay(30);
		drawRectangle(155 + j, 34 + i, 170 + j, 49 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(155 + j, 49 + i, 170 + j, 64 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(155 + j, 64 + i, 170 + j, 79 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(140 + j, 49 + i, 155 + j, 64 + i, 0, 0, 0, 0, 0, 0);
		i += 1;

	}
	for (int k = 1; k < 2; k++)
	{
		if (i >= (limit - 2))
		{
			drawRectangle(155 + j, 34 + i, 170 + j, 49 + i, 255, 255, 255, 87, 0, 127);
			drawRectangle(155 + j, 49 + i, 170 + j, 64 + i, 255, 255, 255, 87, 0, 127);
			drawRectangle(155 + j, 64 + i, 170 + j, 79 + i, 255, 255, 255, 87, 0, 127);
			drawRectangle(140 + j, 49 + i, 155 + j, 64 + i, 255, 255, 255, 87, 0, 127);
			int f = j + 100, y;
			f = f / 13;
			y = i / 13;
			int count = 0;
			for (int k = 0; k < 23; k++)
			{
				for (int l = f; l < f + 1; l++)
				{
					if (k == y)
					{
						if (count == 0)
						{
							for (int d = y - 2; d <= y; d++)
							{
								//space[d][l] = 'x';
								s[d][l] = 'x';

							}
							//space[k - 1][l - 1] = 'x';
							s[k - 1][l - 1] = 'x';
							count++;
						}
					}
				}
				break;
			}
		}
	}
}
void T::print()
{
	for (int i = 0; i < 23; i++)
	{
		for(int j = 0; j < 14; j++)
		{
			cout << space[i][j];
		}
		cout << endl;
	}
}