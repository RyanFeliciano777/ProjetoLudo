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

void linhaCimaTabuleiro(){
	
	int i;
    printf("%c", 201);
    for (i = 0; i < 55; i++){
        printf("%c", 205);
        if(i==22){
        	printf("%c", 203);
		}
		else if(i==25){
			printf("%c", 203);
		}
		else if(i==28){
			printf("%c", 203);
		}
		else if(i==31){
			printf("%c", 203);
		}
    }
    printf("%c\n", 187);
}
void linhaBaixoTabuleiro(){
	
	int i;
    printf("%c", 200);
    for (i = 0; i < 55; i++) 	
	{
        printf("%c", 205);
         if(i==22){
        	printf("%c", 202);
		}
		else if(i==25){
			printf("%c", 202);
		}
		else if(i==28){
			printf("%c", 202);
		}
		else if(i==31){
			printf("%c", 202);
		}
    }
    printf("%c\n", 188);
}

main(){
    linhaCimaTabuleiro();
	printf("%c                       %c   %c   %c   %c                       %c\n",186,186,186,186,186,186);
    printf("%c                       %c%c%c%c%c%c%c%c%c%c%c%c%c                       %c\n",186,204,205,205,205,206,205,205,205,206,205,205,205,185,186);
    printf("%c                       %c   %c   %c   %c                       %c\n",186,186,186,186,186,186);
    printf("%c       %c%c%c%c%c%c%c%c%c       %c%c%c%c%c%c%c%c%c%c%c%c%c       %c%c%c%c%c%c%c%c%c       %c\n",186,201,205,205,205,203,205,205,205,187,204,205,205,205,206,205,205,205,206,205,205,205,185,201,205,205,205,203,205,205,205,187,186);
    printf("%c       %c   %c   %c       %c   %c   %c   %c       %c   %c   %c       %c\n", 186,186,186,186,186,186,186,186,186,186,186,186);
    printf("%c       %c%c%c%c%c%c%c%c%c       %c%c%c%c%c%c%c%c%c%c%c%c%c       %c%c%c%c%c%c%c%c%c       %c\n", 186,204,205,205,205,206,205,205,205,185,204,205,205,205,206,205,205,205,206,205,205,205,185,204,205,205,205,206,205,205,205,185,186);
    printf("%c       %c   %c   %c       %c   %c   %c   %c       %c   %c   %c       %c\n", 186,186,186,186,186,186,186,186,186,186,186,186);
    printf("%c       %c%c%c%c%c%c%c%c%c       %c%c%c%c%c%c%c%c%c%c%c%c%c       %c%c%c%c%c%c%c%c%c       %c\n", 186,200,205,205,205,202,205,205,205,188,204,205,205,205,206,205,205,205,206,205,205,205,185,200,205,205,205,202,205,205,205,188,186);
    printf("%c                       %c   %c   %c   %c                       %c\n",186,186,186,186,186,186);
    printf("%c                       %c%c%c%c%c%c%c%c%c%c%c%c%c                       %c\n",186,204,205,205,205,206,205,205,205,206,205,205,205,185,186);
    printf("%c                       %c   %c   %c   %c                       %c\n",186,186,186,186,186,186);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",204,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,185);
    printf("%c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c\n",186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",204,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,185);
    printf("%c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c\n",186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",204,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,185);
    printf("%c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c\n",186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",204,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,185);
	printf("%c                       %c   %c   %c   %c                       %c\n",186,186,186,186,186,186);
    printf("%c                       %c%c%c%c%c%c%c%c%c%c%c%c%c                       %c\n",186,204,205,205,205,206,205,205,205,206,205,205,205,185,186);
    printf("%c                       %c   %c   %c   %c                       %c\n",186,186,186,186,186,186);
    printf("%c       %c%c%c%c%c%c%c%c%c       %c%c%c%c%c%c%c%c%c%c%c%c%c       %c%c%c%c%c%c%c%c%c       %c\n",186,201,205,205,205,203,205,205,205,187,204,205,205,205,206,205,205,205,206,205,205,205,185,201,205,205,205,203,205,205,205,187,186);
    printf("%c       %c   %c   %c       %c   %c   %c   %c       %c   %c   %c       %c\n", 186,186,186,186,186,186,186,186,186,186,186,186);
    printf("%c       %c%c%c%c%c%c%c%c%c       %c%c%c%c%c%c%c%c%c%c%c%c%c       %c%c%c%c%c%c%c%c%c       %c\n", 186,204,205,205,205,206,205,205,205,185,204,205,205,205,206,205,205,205,206,205,205,205,185,204,205,205,205,206,205,205,205,185,186);
    printf("%c       %c   %c   %c       %c   %c   %c   %c       %c   %c   %c       %c\n", 186,186,186,186,186,186,186,186,186,186,186,186);
    printf("%c       %c%c%c%c%c%c%c%c%c       %c%c%c%c%c%c%c%c%c%c%c%c%c       %c%c%c%c%c%c%c%c%c       %c\n", 186,200,205,205,205,202,205,205,205,188,204,205,205,205,206,205,205,205,206,205,205,205,185,200,205,205,205,202,205,205,205,188,186);
    printf("%c                       %c   %c   %c   %c                       %c\n",186,186,186,186,186,186);
    printf("%c                       %c%c%c%c%c%c%c%c%c%c%c%c%c                       %c\n",186,204,205,205,205,206,205,205,205,206,205,205,205,185,186);
    printf("%c                       %c   %c   %c   %c                       %c\n",186,186,186,186,186,186);
    linhaBaixoTabuleiro();
    
   	int v, h;
    	
    	//LINHA DA ESQUERDA
    	gotoxy(62,0);
    	VERDE;
    	printf("%c", 201);
    	for(v = 0; v < 29; v++){
    		if( v <= 5){
    			VERDE;
			} else if(v >= 23){
				AMARELO;
			} else{
				BRANCO;
			}
			
    		gotoxy(62,v+1);
    		printf("%c", 186);
		}
		
		gotoxy(62, 23);
		BRANCO;
		printf("%c", 204);
		for(h = 0; h < 30; h++){
		printf("%c", 205);
		}
		
		gotoxy(62, 15);
		printf("%c", 204);
		for(h = 0; h < 30; h++){
		printf("%c", 205);
		}
		
		//LINHA DE CIMA
		gotoxy(62,30);
		AMARELO;
		printf("%c", 200);
		for(v = 0; v < 30; v++){
			if(v <= 11){
				VERDE;
			} else if(v >= 18){
				VERMELHO;
			} else{
				BRANCO;
			}
			gotoxy(63+v,0);
			printf("%c", 205);
		}
		
		//LINHA DA DIREITA
		gotoxy(93,0);
		VERMELHO;
    	printf("%c", 187);
    	for(v = 0; v < 29; v++){
    		if( v <= 5){
    			VERMELHO;
			} else if(v >= 23){
				AZUL;
			}else{
				BRANCO;
			}
			
    		gotoxy(93,v+1);
    		printf("%c", 186);
    		BRANCO;
    		gotoxy(93, 15);
			printf("%c", 185);
			
			gotoxy(93, 23);
			printf("%c", 185);	
		}
		
		//LINHA DE BAIXO
		gotoxy(93,30);
		AZUL;
		printf("%c", 188);
		for(v = 0; v < 30; v++){
			if(v <= 11){
				AMARELO;
			} else if(v >= 18){
				AZUL;
			} else{
				BRANCO;
			}
			gotoxy(63+v,30);
			printf("%c", 205);
		}	
}



