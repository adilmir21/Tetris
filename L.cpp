#include"Lshape.h"
void L::lshape(int& i, int& j, char s[23][15])
{
	int limit = 308;//246
	j = 0;
	while (i <= limit)
	{
		char c = getKey();
		if (c == 'a')
		{
			//Board::shape4(i, j);
			L::rotatel(i, j,s);
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
			//j = 0; //if piece exceeds bounds;
			j -= 2;
		}
		if (j < (-100))
		{
			//j = 0;
			j += 2;
		}
		int k = j + 100,m;
		k = k / 12;
		m = i / 14;
	
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
	/*	if (s[m + 2][k - 2] == 'x')
		{
			limit = i;
			break;
		}
		if (s[m + 2][k + 2] == 'x')
		{
			limit = i;
			break;
		}*/

		drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 255, 255, 255, 255, 0, 110);
		drawRectangle(140 + j, 49 + i, 155 + j, 64 + i, 255, 255, 255, 255, 0, 110);
		drawRectangle(155 + j, 49 + i, 170 + j, 64 + i, 255, 255, 255, 255, 0, 110);  // pink colour white boundary
		drawRectangle(170 + j, 49 + i, 185 + j, 64 + i, 255, 255, 255, 255, 0, 110);

		delay(30);
		//delay(10);
		drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(140 + j, 49 + i, 155 + j, 64 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(155 + j, 49 + i, 170 + j, 64 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(170 + j, 49 + i, 185 + j, 64 + i, 0, 0, 0, 0, 0, 0);

		i += 1;

	}
	if (i >= (limit - 4) && i <= (limit + 2))  //242  248
	{
		drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 255, 255, 255, 255, 0, 110);
		drawRectangle(140 + j, 49 + i, 155 + j, 64 + i, 255, 255, 255, 255, 0, 110);
		drawRectangle(155 + j, 49 + i, 170 + j, 64 + i, 255, 255, 255, 255, 0, 110);
		drawRectangle(170 + j, 49 + i, 185 + j, 64 + i, 255, 255, 255, 255, 0, 110);
		int f = j + 100;
		f = f / 12;
		if (f == 0 || f == 1 || f == 2)
		{
			f += 3;
		}
		if (f > 12)
		{
			f = 12;
		}
		int y = i / 14;
		int g = f - 3;
		int coun = 0;
		for (int k = 0; k < 25; k++)
		{
			for (int l = f; l < f+1; l++)
			{
				if (k == y)
				{
					if (coun == 0)
					{
						s[k][l] = 'x';
						s[k + 1][l] = 'x';
						s[k + 1][l + 1] = 'x';
						s[k + 1][l + 2] = 'x';
						//for (int d = y - 1; d < y; d++)
						//{
						//	/*space[d][l] = 'x';*/
						//	s[d][l] = 'x';
						//}
						//for (int d = y; d < y+1; d++)
						//{
						//	/*space[d][l] = 'x';*/
						//	s[d][l] = 'x';
						//}
						coun++;
					}
					//space[k][l] = 'x';
					//s[k+1][l] = 'x';
				
				}
			}
		}

	}

}
void L::rotatel(int& i, int& j, char s[23][15])
{
	int limit = 308;//250;
	j = 0;

	while (i <= limit)
	{
		char c = getKey();
		if (c == 'b')
		{
			L::lshape(i, j,s);
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
		int k = j + 100;
		k = k / 13;
		int m = i / 14;
		if (s[m + 3][k] == 'x')
		{
			limit = i;
			break;
		}
		if (s[m + 3][k - 1] == 'x')
		{
			limit = i;
			break;
		}
		if (s[m + 3][k + 1] == 'x')
		{
			limit = i;
			break;
		}

		drawRectangle(155 + j, 19 + i, 170 + j, 34 + i, 255, 255, 255, 255, 0, 110);
		drawRectangle(155 + j, 34 + i, 170 + j, 49 + i, 255, 255, 255, 255, 0, 110);
		drawRectangle(155 + j, 49 + i, 170 + j, 64 + i, 255, 255, 255, 255, 0, 110);
		drawRectangle(140 + j, 49 + i, 155 + j, 64 + i, 255, 255, 255, 255, 0, 110);


		delay(30);
		//delay(10);
		drawRectangle(155 + j, 19 + i, 170 + j, 34 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(155 + j, 34 + i, 170 + j, 49 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(155 + j, 49 + i, 170 + j, 64 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(140 + j, 49 + i, 155 + j, 64 + i, 0, 0, 0, 0, 0, 0);
		i += 1;

	}
	if (i >= limit)
	{
		drawRectangle(155 + j, 19 + i, 170 + j, 34 + i, 255, 255, 255, 255, 0, 110);
		drawRectangle(155 + j, 34 + i, 170 + j, 49 + i, 255, 255, 255, 255, 0, 110);
		drawRectangle(155 + j, 49 + i, 170 + j, 64 + i, 255, 255, 255, 255, 0, 110);
		drawRectangle(140 + j, 49 + i, 155 + j, 64 + i, 255, 255, 255, 255, 0, 110);
		int f = j + 100;
		f = f / 13;
		if (f == 0)
		{
			f += 1;
		}
		int y = i / 14;
		if (f == 0 || f == 1)
		{
			f += 2;
		}
		int g = f - 2;
		int coun = 0;
		
		for (int k = 0; k < 25; k++)
		{
			//for (int l = g; l < f; l++)
			for (int l = f; l < f+1; l++)
			{
				if (k == y)
				{
					if (coun == 0)
					{
						s[k][l] = 'x';
						s[k + 1][l] = 'x';
						s[k + 2][l] = 'x';
						s[k + 2][l - 1] = 'x';
						/*for (int d = y - 2; d <= y; d++)
						{
							s[d][l + 1] = 'x';
						}*/
						/*for (int d = y+1; d <= y+3; d++)
						{
							s[d][l + 1] = 'x';
						}*/
						coun++;
						
					}
					

				}
			}
		}

	}
}
void L::l2shape(int& i, int& j, char s[23][15])
{
	j = 0;
	int limit = 308;//246;
	while (i <= limit)
	{
		char c = getKey();
		if (c == 'a')
		{
			L::rotatel2(i, j,s);
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
			//j = 0; //if piece exceeds bounds;
			j -= 2;
		}
		if (j < (-100))
		{
			//j = 0;
			j += 2;
		}
		int k = j + 100, m;
		k = k / 12;
		m = i / 14;
		if (s[m + 3][k] == 'x')
		{
			limit = i;
			break;
		}
		if (s[m + 3][k + 1] == 'x')
		{
			limit = i;
			break;
		}
		if (s[m + 3][k - 1] == 'x')
		{
			limit = i;
			break;
		}
	/*	if (s[m + 2][k - 2] == 'x')
		{
			limit = i;
			break;
		}
		if (s[m + 2][k + 2] == 'x')
		{
			limit = i;
			break;
		}*/

		drawRectangle(140 + j, 47 + i, 155 + j, 62 + i, 255, 255, 255, 255, 106, 0);
		drawRectangle(155 + j, 47 + i, 170 + j, 62 + i, 255, 255, 255, 255, 106, 0);
		drawRectangle(170 + j, 32 + i, 185 + j, 47 + i, 255, 255, 255, 255, 106, 0);
		drawRectangle(170 + j, 47 + i, 185 + j, 62 + i, 255, 255, 255, 255, 106, 0);


		delay(30);
		//delay(10);
		drawRectangle(140 + j, 47 + i, 155 + j, 62 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(155 + j, 47 + i, 170 + j, 62 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(170 + j, 32 + i, 185 + j, 47 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(170 + j, 47 + i, 185 + j, 62 + i, 0, 0, 0, 0, 0, 0);

		i += 1;

	}
	if (i >= (limit - 4) && i <= (limit + 2))
	{
		drawRectangle(140 + j, 47 + i, 155 + j, 62 + i, 255, 255, 255, 255, 106, 0);
		drawRectangle(155 + j, 47 + i, 170 + j, 62 + i, 255, 255, 255, 255, 106, 0);
		drawRectangle(170 + j, 32 + i, 185 + j, 47 + i, 255, 255, 255, 255, 106, 0);
		drawRectangle(170 + j, 47 + i, 185 + j, 62 + i, 255, 255, 255, 255, 106, 0);
		int f = j + 100;
		f = f / 12;
		if (f == 0 || f == 1 || f == 2)
		{
			f += 3;
		}
		int y = i / 14;
		int g = f -3;
		int coun = 0;
		for (int k = 0; k < 25; k++)
		{
			for (int l = f; l < f+1; l++)
			{
				if (k == y)
				{
					if (coun == 0)
					{
						s[k][l] = 'x';
						s[k + 1][l] = 'x';
						s[k + 1][l - 1] = 'x';
						s[k + 1][l - 2] = 'x';
						//for (int d = y - 1; d < y; d++)
						//{
						//	//space[d][l+2] = 'x';
						//	s[d][l + 2] = 'x';
						//}
						//for (int d = y+1; d < y+2; d++)
						//{
						//	//space[d][l+2] = 'x';
						//	s[d][l + 2] = 'x';
						//}
						coun++;
					}
					//space[k][l] = 'x';
					//s[k][l] = 'x';

				}
			}
		}

	}



}
void L::rotatel2(int& i, int& j,char s[23][15])
{
	j = 0;
	int limit = 308;// 250;
	while (i <= limit)
	{
		char c = getKey();
		if (c == 'b')
		{
			L::l2shape(i, j,s);
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
		int k = j + 100;
		k = k / 13;
		int m = i / 14;
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
		if (s[m + 2][k -1 ] == 'x')
		{
			limit = i;
			break;
		}
	
		drawRectangle(140 + j, 19 + i, 155 + j, 34 + i, 255, 255, 255, 255, 106, 0);
		drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 255, 255, 255, 255, 106, 0);
		drawRectangle(140 + j, 49 + i, 155 + j, 64 + i, 255, 255, 255, 255, 106, 0);
		drawRectangle(155 + j, 49 + i, 170 + j, 64 + i, 255, 255, 255, 255, 106, 0);

		
		delay(30);
		//delay(10);
		drawRectangle(140 + j, 19 + i, 155 + j, 34 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(140 + j, 49 + i, 155 + j, 64 + i, 0, 0, 0, 0, 0, 0);
		drawRectangle(155 + j, 49 + i, 170 + j, 64 + i, 0, 0, 0, 0, 0, 0);
		i += 1;

	}
	if (i >= limit)
	{
		drawRectangle(140 + j, 19 + i, 155 + j, 34 + i, 255, 255, 255, 255, 106, 0);
		drawRectangle(140 + j, 34 + i, 155 + j, 49 + i, 255, 255, 255, 255, 106, 0);
		drawRectangle(140 + j, 49 + i, 155 + j, 64 + i, 255, 255, 255, 255, 106, 0);
		drawRectangle(155 + j, 49 + i, 170 + j, 64 + i, 255, 255, 255, 255, 106, 0);
		int f = j + 100;
		f = f / 13;
		if (f == 0)
		{
			f += 1;
		}
		int y = i / 14;
		if (f == 0 || f == 1)
		{
			f += 2;
		}
		int g = f - 2;
		int coun = 0;

		for (int k = 0; k < 25; k++)
		{
			for (int l = f; l < f+1; l++)
			{
				if (k == y)
				{
					if (coun == 0)
					{
						//for (int d = y - 2; d <= y; d++)
						//{
						//	//space[d][l] = 'x';
						//	s[d][l] = 'x';
						//}
						//for (int d = y+1; d <= y+3; d++)
						//{
						//	//space[d][l] = 'x';
						//	s[d][l] = 'x';
						//}
						s[k][l] = 'x';
						s[k + 1][l] = 'x';
						s[k + 2][l] = 'x';
						s[k + 2][l+1] = 'x';
						coun++;
						
					}
					//space[k][l] = 'x';
					//s[k][l] = 'x';

				}
			}
		}

	}
}
void L::print()
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