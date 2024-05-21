#include <stdio.h>
#include <windows.h>
#include <time.h>

#define VERMELHO SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4)
#define VERDE SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2)
#define AZUL SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1)
#define AMARELO SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6)
#define BRANCO SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)

void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void telaTabuleiro()
{
    	int v, h;
    	
    	//LINHA DA ESQUERDA
    	gotoxy(62,0);
    	VERDE;
    	printf("%c", 201);
    	BRANCO;
    	for(v = 0; v < 29; v++)
    	{
    		gotoxy(62,v+1);
    		printf("%c", 186);
    		
    		if (v == 15)
			{
				gotoxy(62, 15);
				printf("%c", 204);
				for(h = 0; h < 30; h++)
				{
					printf("%c", 205);
				}
			}
			else if(v == 24)
			{
				gotoxy(62, 24);
				printf("%c", 204);
				for(h = 0; h < 30; h++)
				{
					printf("%c", 205);
				}
			}
		}
		
		//LINHA DE CIMA
		gotoxy(62,30);
		printf("%c", 200);
		for(v = 0; v < 30; v++)
		{
			gotoxy(63+v,0);
			printf("%c", 205);
		}
		
		//LINHA DA DIREITA
		gotoxy(93,0);
    	printf("%c", 187);
    	for(v = 0; v < 29; v++)
    	{
    		gotoxy(93,v+1);
    		printf("%c", 186);
    		
    		if(v == 15)
    		{
    			gotoxy(93, 15);
				printf("%c", 185);
			}
			else if(v == 24)
			{
				gotoxy(93, 24);
				printf("%c", 185);
			}
		}
		
		//LINHA DE BAIXO
		gotoxy(93,30);
		printf("%c", 188);
		for(v = 0; v < 30; v++)
		{
			gotoxy(63+v,30);
			printf("%c", 205);
		}
}

main(){
	
	telaTabuleiro();
	
}
