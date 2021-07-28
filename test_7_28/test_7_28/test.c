
#include<stdio.h>
#include"game.h"

void menu()
{
	printf("*******************************\n");
	printf("******      1.play       ******\n");
	printf("******      0.exit       ******\n");
	printf("*******************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	InitBoard();
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("ÇëÑ¡Ôñ:>");
		scanf("%d", &input);
		switch(input)
			case 1:

			case 2:

	
	
	}

	return 0;
}