#include <stdio.h>
#include <windows.h>

int selecionarEscolhaJogadores = 0;
int selecionarAposta = 0;
char escolhaRegras[1];
char Jogador1[10], Jogador2[10], Jogador3[10], Jogador4[10];

void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//LINHA DE CIMA TELAS
void linhaCima(){
	
	int i;
	// LINHA DE CIMA DO MENU
    printf("%c", 201);
    for (i = 0; i < 60; i++) {
        printf("%c", 205); // LINHA HORIZONTAL
    }
    printf("%c\n", 187);
}

//LINHA DE BAIXO DO MENU
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
    //ESPAÇO PARA ESCREVER
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
	linhaBaixo();
}

//TELA INICIAL
void telaInicial(){
	
	system("cls");	
	
	linhaCima();
    //ESPAÇO PARA ESCREVER
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
	gotoxy(51,9);
	getch();
}

//MENSAGEM INICIAL
void mensagemInicial(){
	
	system("cls");		
	
    linhaCima();
    //ESPAÇO PARA ESCREVER
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
	gotoxy(54,14);
	getch();
}

//TELA DE REGRAS
void telaRegras01(){
	
	system("cls");
	linhaCima();    
    //ESPAÇO PARA ESCREVER
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
    printf("%c                           (1/2)                Proximo (P) %c\n", 186, 186);
	linhaBaixo();
}

void telaRegras02(){
	
	system("cls");
	linhaCima();    
    //ESPAÇO PARA ESCREVER
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

//CONSULTAR QUANTIDADE DE JOGADORES
void selecionarNumeroJogadores(){
	
	system("cls");
	
	linhaCima();
    //ESPAÇO PARA ESCREVER
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                Quantos jogadores participarao?             %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                       1 - 2 Jogadores                      %c\n", 186, 186);
    printf("%c                       2 - 3 Jogadores                      %c\n", 186, 186);
    printf("%c                       3 - 4 Jogadores                      %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                Por favor, selecione um numero:             %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
	linhaBaixo();
	gotoxy(48,12);
	scanf("%i", &selecionarEscolhaJogadores);
	
	if(selecionarEscolhaJogadores == 1)
	{
	system("cls");
	
	linhaCima();
    //ESPAÇO PARA ESCREVER
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                    Registro de Jogadores                   %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c           Por favor, insira o nome dos jogadores           %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c           Jogador 1:                                       %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c           Jogador 2:                                       %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
	linhaBaixo();
	gotoxy(22,7);
	scanf("%9s", Jogador1);
	gotoxy(22,9);
	scanf("%9s", Jogador2);
	}
	else if(selecionarEscolhaJogadores == 2)
	{
	system("cls");
	
	linhaCima();
    //ESPAÇO PARA ESCREVER
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                    Registro de Jogadores                   %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c           Por favor, insira o nome dos jogadores           %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c           Jogador 1                                        %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c           Jogador 2:                                       %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c           Jogador 3:                                       %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
	linhaBaixo();
	gotoxy(22,7);
	scanf("%9s", Jogador1);
	gotoxy(22,9);
	scanf("%9s", Jogador2);
	gotoxy(22,11);
	scanf("%9s", Jogador3);
	}
	else if(selecionarEscolhaJogadores == 3)
	{
	system("cls");
	
	linhaCima();
    //ESPAÇO PARA ESCREVER
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                    Registro de Jogadores                   %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c           Por favor, insira o nome dos jogadores           %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c           Jogador 1                                        %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c           Jogador 2:                                       %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c           Jogador 3:                                       %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c           Jogador 4:                                       %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
	linhaBaixo();
	gotoxy(22,7);
	scanf("%9s", Jogador1);
	gotoxy(22,9);
	scanf("%9s", Jogador2);
	gotoxy(22,11);
	scanf("%9s", Jogador3);
	gotoxy(22,13);
	scanf("%9s", Jogador4);	
	}
}

//SELECIONAR VALOR DA APOSTA
void valorAposta(){
	
	system("cls");
	
	linhaCima();
    //ESPAÇO PARA ESCREVER
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                      Valores de Aposta                     %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                         1 - R$ 5,00                        %c\n", 186, 186);
    printf("%c                         2 - R$ 10,00                       %c\n", 186, 186);
    printf("%c                         3 - R$ 20,00                       %c\n", 186, 186);
    printf("%c                         4 - R$ 50,00                       %c\n", 186, 186);
    printf("%c                         5 - R$ 100,00                      %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                Por favor, selecione um numero:             %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
	linhaBaixo();
	gotoxy(48,13);
	scanf("%i", &selecionarAposta);
}

main(){

	telaInicial();
	mensagemInicial();
	telaRegras01();
	getch();
	telaRegras02();
	getch();
	selecionarNumeroJogadores();
	valorAposta();
}
