#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void linhaCima(){
	
	int i;
	// LINHA DE CIMA DO MENU
    printf("%c", 201);
    for (i = 0; i < 60; i++) {
        printf("%c", 205); // LINHA HORIZONTAL
    }
    printf("%c\n", 187);
}

void linhaBaixo(){
	
	int i;
	// LINHA DE BAIXO DO QUADRADO
    printf("%c", 200);
    for (i = 0; i < 60; i++) 
	{
        printf("%c", 205);
    }
    printf("%c\n", 188);
}
//COPIAR PRA FAZER OUTRAS TELAS
void telasMenu(){
	
	system("cls");
	
	linhaCima();    
    //ESPA�O PARA ESCREVER
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
	linhaCima();
}

void telaInicial(){
	
	system("cls");	
	
	linhaCima();
    //ESPA�O PARA ESCREVER
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c               Bem Vindo(a) ao Ludo Bet Play!               %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c           Pressione qualquer tecla para continuar          %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
	linhaBaixo();
}

void mensagemInicial(){
	
	system("cls");		
	
    linhaCima();
    //ESPA�O PARA ESCREVER
    printf("%c Prezado(a) jogador(a)                                      %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c Bem-vindo ao nosso jogo! Antes de comecar a jogar, gostar- %c\n", 186, 186);
    printf("%c iamos de ressaltar a extrema importancia de ler cuidadosa- %c\n", 186, 186);
    printf("%c mente as regras do jogo. Elas foram elaboradas para garan- %c\n", 186, 186);
    printf("%c ir uma experiencia justa, divertida e imersiva para todos  %c\n", 186, 186);
    printf("%c os participantes.                                          %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c Divirta-se e boa sorte!                                    %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c Atenciosamente,                                            %c\n", 186, 186);
    printf("%c RoyalWin Games                                             %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c Precione qualquer tecla para acessar a aba de regras       %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
	linhaBaixo();
}

void telasRegra01(){
	
	system("cls");
	linhaCima();    
    //ESPA�O PARA ESCREVER
    printf("%c                           REGRAS                           %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c Voltar (V)                (1/2)                Proximo (P) %c\n", 186, 186);
	linhaBaixo();
}

void telasRegra02(){
	
	system("cls");
	linhaCima();    
    //ESPA�O PARA ESCREVER
    printf("%c                           REGRAS                           %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c Voltar (V)                (2/2)                Proximo (P) %c\n", 186, 186);
	linhaBaixo();
}

main(){
	
	telaInicial();
	gotoxy(51,9);
	getch();
	mensagemInicial();
	gotoxy(54,14);
	getch();
	telasRegra01();
	getch();
	telasRegra02();
}
