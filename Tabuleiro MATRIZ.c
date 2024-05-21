#include <windows.h>
#include <stdio.h>

main() {

    char Tabuleiro[31][61] = {
        {201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187},
      	{186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',201,205,205,205,203,205,205,205,187,' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',201,205,205,205,203,205,205,205,187,' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',200,205,205,205,202,205,205,205,188,' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',200,205,205,205,202,205,205,205,188,' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186},
      	{204,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,185},
      	{186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186},
      	{204,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,185},
      	{186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186},
      	{204,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,185},
      	{186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186},
      	{204,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,185},
      	{186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',201,205,205,205,203,205,205,205,187,' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',201,205,205,205,203,205,205,205,187,' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',200,205,205,205,202,205,205,205,188,' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',200,205,205,205,202,205,205,205,188,' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186},
      	{200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188},
    };
   
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
   
    int i,j;
    
 	 for (i = 0; i < 31; i++) {
        for (j = 0; j < 61; j++){
        	//CONDI��O PRA PINTAR O TABULEIRO
        	
        	//QUADRADOS DO TABULEIRO
        	
        	//VERMELHO
        	//BARRA DE CIMA
            if(i == 4 && j >= 8 && j <= 16) 
			{
    		SetConsoleTextAttribute(hConsole, 4);
			}
			//BARRA DA ESQUERDA
			else if(i >= 5 && j == 8 && i <= 8)
			{
			SetConsoleTextAttribute(hConsole, 4);
			}
			//BARRA DE BAIXO
			else if(i == 8 && j >= 9 && j <= 16)
			{
			SetConsoleTextAttribute(hConsole, 4);
			}
			//BARRA DA DIREITA
			else if(i >= 5 && j == 16 && i <= 8)
			{
			SetConsoleTextAttribute(hConsole, 4);
			}
			//BARRA DO MEIO DA HORIZONTAL
			else if(i == 6 && j >= 9 && j <= 16)
			{
			SetConsoleTextAttribute(hConsole, 4);
			}
			//BARRA DO MEIO DA VERTICAL
			else if(i >= 5 && j == 12 && i <= 7)
			{
			SetConsoleTextAttribute(hConsole, 4);
			}
			
			//AZUL
        	//BARRA DE CIMA
            else if(i == 22 && j >= 8 && j <= 16) 
			{
    		SetConsoleTextAttribute(hConsole, 1);
			}
			//BARRA DA ESQUERDA
			else if(i >= 22 && j == 8 && i <= 26)
			{
			SetConsoleTextAttribute(hConsole, 1);
			}
			//BARRA DE BAIXO
			else if(i == 26 && j >= 9 && j <= 16)
			{
			SetConsoleTextAttribute(hConsole, 1);
			}
			//BARRA DA DIREITA
			else if(i >= 22 && j == 16 && i <= 26)
			{
			SetConsoleTextAttribute(hConsole, 1);
			}
			//BARRA DO MEIO DA HORIZONTAL
			else if(i == 24 && j >= 9 && j <= 16)
			{
			SetConsoleTextAttribute(hConsole, 1);
			}
			//BARRA DO MEIO DA VERTICAL
			else if(i >= 23 && j == 12 && i <= 25)
			{
			SetConsoleTextAttribute(hConsole, 1);
			}
			
			//VERDE
        	//BARRA DE CIMA
            else if(i == 4 && j >= 44 && j <= 52) 
			{
    		SetConsoleTextAttribute(hConsole, 2);
			}
			//BARRA DA ESQUERDA
			else if(i >= 5 && j == 44 && i <= 8)
			{
			SetConsoleTextAttribute(hConsole, 2);
			}
			//BARRA DE BAIXO
			else if(i == 8 && j >= 45 && j <= 52)
			{
			SetConsoleTextAttribute(hConsole, 2);
			}
			//BARRA DA DIREITA
			else if(i >= 5 && j == 52 && i <= 7)
			{
			SetConsoleTextAttribute(hConsole, 2);
			}
			//BARRA DO MEIO DA HORIZONTAL
			else if(i == 6 && j >= 45 && j <= 51)
			{
			SetConsoleTextAttribute(hConsole, 2);
			}
			//BARRA DO MEIO DA VERTICAL
			else if(i >= 5 && j == 48 && i <= 7)
			{
			SetConsoleTextAttribute(hConsole, 2);
			}
			
			//AMARELO
        	//BARRA DE CIMA
            else if(i == 22 && j >= 44 && j <= 52) 
			{
    		SetConsoleTextAttribute(hConsole, 6);
			}
			//BARRA DA ESQUERDA
			else if(i >= 23 && j == 44 && i <= 26)
			{
			SetConsoleTextAttribute(hConsole, 6);
			}
			//BARRA DE BAIXO
			else if(i == 26 && j >= 45 && j <= 52)
			{
			SetConsoleTextAttribute(hConsole, 6);
			}
			//BARRA DA DIREITA
			else if(i >= 23 && j == 52 && i <= 26)
			{
			SetConsoleTextAttribute(hConsole, 6);
			}
			//BARRA DO MEIO DA HORIZONTAL
			else if(i == 24 && j >= 45 && j <= 52)
			{
			SetConsoleTextAttribute(hConsole, 6);
			}
			//BARRA DO MEIO DA VERTICAL
			else if(i >= 23 && j == 48 && i <= 25)
			{
			SetConsoleTextAttribute(hConsole, 6);
			}
			
			//PINTAR AS EXTREMIDADES
			//VERMELHO
			else if(i >= 0 && j == 0 && i <= 6)
			{
			SetConsoleTextAttribute(hConsole, 4);
			}
			else if(i == 0 && j >= 0 && j <= 12)
			{
			SetConsoleTextAttribute(hConsole, 4);
			}
			
			//AZUL
			else if(i == 30 && j >= 0 && j <= 12)
			{
			SetConsoleTextAttribute(hConsole,1);
			}
			else if(i >= 24 && j == 0 && i <= 30)
			{
			SetConsoleTextAttribute(hConsole, 1);
			}
			
			//VERDE
        	else if(i >= 0 && j == 60 && i <= 6)
			{
			SetConsoleTextAttribute(hConsole, 2);
			}
			else if(i == 0 && j >= 48 && j <= 60)
			{
			SetConsoleTextAttribute(hConsole, 2);
			}
			
			//AMARELO
			else if(i == 30 && j >= 48 && j <= 60)
			{
			SetConsoleTextAttribute(hConsole, 6);
			}
			else if(i >= 24 && j == 60 && i <= 30)
			{
			SetConsoleTextAttribute(hConsole, 6);
			}
			
			printf("%c", Tabuleiro[i][j]);
			SetConsoleTextAttribute(hConsole, 15);
        }
        printf("\n");
    }
}


