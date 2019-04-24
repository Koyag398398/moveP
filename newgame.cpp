#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;
const int WIDTH = 10;
const int HEIGHT = 8;
int map[HEIGHT][WIDTH];

int x = 4;
int y = 5;

char ch;

int x_o = 3;
int y_o = 1;

int gx = 1;
int gy = 1;

int goalp = 0;
char goalcr;
void goal()
{
	cout << "ゴールしていく！！";
	cout << "[ｐ]で終了";
	cin >> goalcr;
	exit(0);
}


int main()
{

	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
				map[i][j] = 1;

		}
	}
	map[gx][gy] = 4;
	for (;;)
	{

		map[x][y] = 2;
		map[x_o][y_o] = 3;
		
		for (int i = 0; i < HEIGHT; i++)
		{
			for (int j = 0; j < WIDTH; j++)
			{
				if (i == 0 || i == HEIGHT - 1 || j == 0 || j == WIDTH - 1)
				{
					cout << "#";

				}
				else if (map[i][j] == 2)
				{
					cout << "P";
				}
				else if (map[i][j] == 3)
				{
					cout << "o";
				}
				else if (map[i][j] == 4)
				{
					cout << "@";
				}

				else if(map[i][j]==1)
				{
					cout << " ";

				}


			}
			cout << endl;
		}
		if (goalp == 1)
		{
			goal();
		}
		ch = _getch();
		switch (ch)
		{
		 case 'w':
			
			 if (x-1!=HEIGHT-HEIGHT)
			{
				map[x][y] = 1;
				if (x - 1 == x_o&& x_o - 1 != HEIGHT - HEIGHT&& y==y_o)
				{
						x_o = x_o - 1;
						if (x_o == gx && y_o == gy)
						{
							map[gx][gy] = 3;
							goalp = 1;
						}
						
				}
				
				x=x -1;

			}
			
			break;

		 case 's':
			if (x + 1 != HEIGHT-1)
			{
				map[x][y] = 1;
				x = x + 1;
			}
			break;
		 case'a':
			if (y - 1 != WIDTH - WIDTH)
			{
				map[x][y] = 1;
				y = y - 1;
			}
			break;
		 case'd':
			if (y + 1 != WIDTH-1)
			{
				map[x][y] = 1;
				y = y + 1;
			}
			break;
		}
		
		system("cls");
	}

}




	