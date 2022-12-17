#include"Board.h"
#include"Piece.h"
#include"horizontal.h"
#include"Lshape.h"
#include"Random.h"
int main()
{
	{
		int z = 30;
	Piece p;
	Board b;
	//b.gamerules();
	b.boardbuild();
	Random r;
	r.randomPiece(z);
	for (int i = 0; i < 25; i++)
	{
		cout << endl;
	}

	system("pause");
}
	return 0;
}