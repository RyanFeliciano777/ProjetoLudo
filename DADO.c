#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

main(){

	srand(time(NULL));
	int numeroDado = rand() % 6 + 1;
	char jogarDado;
	
	printf("Deseja jogar o dado? S ou N:");
	jogarDado = getch();
	
	if (jogarDado == 'S' || jogarDado == 's')
	{
	
		if(numeroDado == 1)
		{	
			gotoxy(22,10);
			printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 201,205,205,205,203,205,205,205,203,205,205,205,187);
			printf("%c   %c   %c   %c", 186,186,186, 186);
			printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 204,205,205,205,206,205,205,205,206,205,205,205,185);
			printf("%c   %c O %c   %c", 186,186,186, 186);
			printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 204,205,205,205,206,205,205,205,206,205,205,205,185);
		  	printf("%c   %c   %c   %c", 186,186,186, 186);
		  	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 200,205,205,205,202,205,205,205,202,205,205,205,188);
		}
		else if(numeroDado == 2)
		{
			gotoxy(22,10);
			printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 201,205,205,205,203,205,205,205,203,205,205,205,187);
			printf("%c   %c   %c O %c", 186,186,186, 186);
			printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 204,205,205,205,206,205,205,205,206,205,205,205,185);
			printf("%c   %c   %c   %c", 186,186,186, 186);
			printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 204,205,205,205,206,205,205,205,206,205,205,205,185);
		  	printf("%c O %c   %c   %c", 186,186,186, 186);
		  	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 200,205,205,205,202,205,205,205,202,205,205,205,188);	
		}
		else if(numeroDado == 3)
		{
			gotoxy(22,10);
			printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 201,205,205,205,203,205,205,205,203,205,205,205,187);
			printf("%c   %c   %c O %c", 186,186,186, 186);
			printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 204,205,205,205,206,205,205,205,206,205,205,205,185);
			printf("%c   %c O %c   %c", 186,186,186, 186);
			printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 204,205,205,205,206,205,205,205,206,205,205,205,185);
		  	printf("%c O %c   %c   %c", 186,186,186, 186);
		  	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 200,205,205,205,202,205,205,205,202,205,205,205,188);	
		}
		else if(numeroDado == 4)
		{
			gotoxy(22,10);
			printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 201,205,205,205,203,205,205,205,203,205,205,205,187);
			printf("%c O %c   %c O %c", 186,186,186, 186);
			printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 204,205,205,205,206,205,205,205,206,205,205,205,185);
			printf("%c   %c   %c   %c", 186,186,186, 186);
			printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 204,205,205,205,206,205,205,205,206,205,205,205,185);
		  	printf("%c O %c   %c O %c", 186,186,186, 186);
		  	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 200,205,205,205,202,205,205,205,202,205,205,205,188);	
		}
		else if(numeroDado == 5)
		{
			gotoxy(22,10);
			printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 201,205,205,205,203,205,205,205,203,205,205,205,187);
			printf("%c O %c   %c O %c", 186,186,186, 186);
			printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 204,205,205,205,206,205,205,205,206,205,205,205,185);
			printf("%c   %c O %c   %c", 186,186,186, 186);
			printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 204,205,205,205,206,205,205,205,206,205,205,205,185);
		  	printf("%c O %c   %c O %c", 186,186,186, 186);
		  	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 200,205,205,205,202,205,205,205,202,205,205,205,188);	
		}
		else if(numeroDado == 6)
		{
			gotoxy(22,10);
			printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 201,205,205,205,203,205,205,205,203,205,205,205,187);
			printf("%c O %c   %c O %c", 186,186,186, 186);
			printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 204,205,205,205,206,205,205,205,206,205,205,205,185);
			printf("%c O %c   %c O %c", 186,186,186, 186);
			printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 204,205,205,205,206,205,205,205,206,205,205,205,185);
		  	printf("%c O %c   %c O %c", 186,186,186, 186);
		  	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", 200,205,205,205,202,205,205,205,202,205,205,205,188);	
		}
	}
}
