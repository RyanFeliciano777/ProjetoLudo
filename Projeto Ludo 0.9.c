#include <stdio.h>
#include <windows.h>
#include <time.h>
#define VERMELHO SetConsoleTextAttribute(hConsole, 4);
int selecionarEscolhaJogadores = 0;
int numeroJogadores = 0;

int paginaAtualRegras = 1;

int selecionarAposta = 0;
float valorAposta = 0;

char escolhaRegras;
char Jogador1[10], Jogador2[10], Jogador3[10], Jogador4[10];



void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//LINHA DE CIMA TELAS
void jogarDado(){
	
	srand(time(NULL));
	int numeroDado = rand() % 6 + 1;
	char jogarDado;
	
	printf("Deseja jogar o dado? S ou N:");
	jogarDado = getch();
	
	if (jogarDado == 'S' || jogarDado == 's')
	{
	
		if(numeroDado == 1)
		{	
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
    printf("%c                          PAGAMENTO                         %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c O valor ganho por jogador e determinado pela soma das apo- %c\n", 186, 186);
    printf("%c stas de todos os participantes. Cada peca do tabuleiro te- %c\n", 186, 186);
    printf("%c m seu valor calculado por: Valor da Peca = (Numero de Jog- %c\n", 186, 186);
    printf("%c adores * 4) / Valor da Aposta. O saldo do ganhador e calc- %c\n", 186, 186);
    printf("%c ulado por: Saldo do Vencedor = 4 * Valor da Peca + (Valor  %c\n", 186, 186);
    printf("%c da Peca * (Numero de Jogadores * 4 - Peças nao chegaram)). %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c Voltar (V)                (2/2)                Proximo (P) %c\n", 186, 186);
	linhaBaixo();
}

void navegarTelaRegras(){
	
    do {
        if (paginaAtualRegras == 1) 
		{
            telaRegras01();
        } 
		else if (paginaAtualRegras == 2) 
		{
            telaRegras02();
        }
        
        escolhaRegras = getch();
        
        if (escolhaRegras == 'P' || escolhaRegras == 'p') 
		{
            if (paginaAtualRegras < 2) 
			{
                paginaAtualRegras++;
            } 
			else 
			{
                break;
            }
        } 
		else if (escolhaRegras == 'V' || escolhaRegras == 'v') 
		{
            if (paginaAtualRegras > 1) 
			{
                paginaAtualRegras--;
            }
        }
    } while (paginaAtualRegras < 3);
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
    printf("%c                      2 - (2 Jogadores)                     %c\n", 186, 186);
    printf("%c                      3 - (3 Jogadores)                     %c\n", 186, 186);
    printf("%c                      4 - (4 Jogadores)                     %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c               Por favor, selecione um numero:              %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
	linhaBaixo();
	gotoxy(47,12);
	scanf("%i", &selecionarEscolhaJogadores);
	
	if(selecionarEscolhaJogadores == 2)
	{
	system("cls");
	
	numeroJogadores = 2; //NUMERO DE JOGADORES RECEBE VALOR
	
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
	else if(selecionarEscolhaJogadores == 3)
	{
	system("cls");
	
	numeroJogadores = 3; //NUMERO DE JOGADORES RECEBE VALOR
	
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
	else if(selecionarEscolhaJogadores == 4)
	{
	system("cls");
	
	numeroJogadores = 4; //NUMERO DE JOGADORES RECEBE VALOR
	
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
void selecionarValorAposta(){
	
	system("cls");
	
	linhaCima();
    //ESPAÇO PARA ESCREVER
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                      Valores de Aposta                     %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                        1 - (R$ 5,00)                       %c\n", 186, 186);
    printf("%c                        2 - (R$ 10,00)                      %c\n", 186, 186);
    printf("%c                        3 - (R$ 20,00)                      %c\n", 186, 186);
    printf("%c                        4 - (R$ 50,00)                      %c\n", 186, 186);
    printf("%c                        5 - (R$ 100,00)                     %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c               Por favor, selecione um numero:              %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
	linhaBaixo();
	gotoxy(47,13);
	scanf("%i", &selecionarAposta);
	
	if(selecionarAposta == 1)
	{
		valorAposta = 5;
	}
	else if(selecionarAposta == 2)
	{
		valorAposta = 10;
	}
	else if(selecionarAposta == 3)
	{
		valorAposta = 20;
	}
	else if(selecionarAposta == 4)
	{
		valorAposta = 50;
	}
	else if(selecionarAposta == 5)
	{
		valorAposta = 100;
	}
}
void revisaoPartida(){
	
	system("cls");
	float totalAposta = 0;
	float valorPeca = 0;
	
	totalAposta = numeroJogadores * valorAposta;
	valorPeca = (numeroJogadores * valorAposta) / (numeroJogadores * 4);
	
	linhaCima();    
    //ESPAÇO PARA ESCREVER
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c               Numero de jogadores: %i                      \n", 186, numeroJogadores);
    printf("%c               Valor total apostado: R$%.2f                 \n", 186, totalAposta);
    printf("%c               Valor Apostado por jogador: R$%.2f           \n", 186, valorAposta);
    printf("%c               Valor de cada peca: R$%.2f                   \n", 186, valorPeca);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c        Precione qualquer tecla para ir para o jogo         %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
    printf("%c                                                            %c\n", 186, 186);
	linhaBaixo();
	//BORDAS DA DIREITA
	gotoxy(61,5);
	printf("%c", 186);
	gotoxy(61,6);
	printf("%c", 186);
	gotoxy(61,7);
	printf("%c", 186);
	gotoxy(61,8);
	printf("%c", 186);
	gotoxy(52,11);
	getch();
}


main(){

	telaInicial();
	mensagemInicial();
	navegarTelaRegras();
	selecionarNumeroJogadores();
	selecionarValorAposta();
	revisaoPartida();
	system("cls");
	
	char Tabuleiro[31][61] = {
        {201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187},
      	{186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',201,205,205,205,203,205,205,205,187,' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',201,205,205,205,203,205,205,205,187,' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',186,' ','A',' ',186,' ','B',' ',186,' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',186,' ','E',' ',186,' ','F',' ',186,' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',186,' ','C',' ',186,' ','D',' ',186,' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',186,' ','G',' ',186,' ','H',' ',186,' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',200,205,205,205,202,205,205,205,188,' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',200,205,205,205,202,205,205,205,188,' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186},
      	{204,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,206,205,205,205,202,205,205,205,202,205,205,205,206,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,185},
      	{186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186},
      	{204,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,185},
      	{186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186},
      	{204,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,185},
      	{186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186},
      	{204,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,206,205,205,205,203,205,205,205,203,205,205,205,206,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,185},
      	{186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',201,205,205,205,203,205,205,205,187,' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',201,205,205,205,203,205,205,205,187,' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',186,' ','I',' ',186,' ','J',' ',186,' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',186,' ','M',' ',186,' ','N',' ',186,' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',204,205,205,205,206,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',186},
      	{186,' ',' ',' ',' ',' ',' ',' ',186,' ','K',' ',186,' ','L',' ',186,' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',186,' ','O',' ',186,' ','P',' ',186,' ',' ',' ',' ',' ',' ',' ',186},
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
        	
        	//PINTAS AS PEÇAS DO TABULEIRO
        	//VERMELHAS
	        	if(i == 5 && j == 10)
	        	{
	        		VERMELHO;
				}
        	
        	else if(i == 5 && j == 14)
        	{
        		SetConsoleTextAttribute(hConsole, 4);
			}
			
			else if(i == 7 && j == 10)
        	{
        		SetConsoleTextAttribute(hConsole, 4);
			}
			
			else if(i == 7 && j == 14)
        	{
        		SetConsoleTextAttribute(hConsole, 4);
			}
			
			//VERDE
			else if(i == 5 && j == 46)
        	{
        		SetConsoleTextAttribute(hConsole, 2);
			}
			else if(i == 5 && j == 50)
        	{
        		SetConsoleTextAttribute(hConsole, 2);
			}
			else if(i == 7 && j == 46)
        	{
        		SetConsoleTextAttribute(hConsole, 2);
			}
			else if(i == 7 && j == 50)
        	{
        		SetConsoleTextAttribute(hConsole, 2);
			}
			
			//AZUL
			else if(i == 23 && j == 10)
        	{
        		SetConsoleTextAttribute(hConsole, 1);
			}
			else if(i == 23 && j == 14)
        	{
        		SetConsoleTextAttribute(hConsole, 1);
			}
			else if(i == 25 && j == 10)
        	{
        		SetConsoleTextAttribute(hConsole, 1);
			}
			else if(i == 25 && j == 14)
        	{
        		SetConsoleTextAttribute(hConsole, 1);
			}
			
			//AMARELO
			else if(i == 23 && j == 46)
        	{
        		SetConsoleTextAttribute(hConsole, 6);
			}
			
			else if(i == 23 && j == 50)
        	{
        		SetConsoleTextAttribute(hConsole, 6);
			
			}
			else if(i == 25 && j == 46)
        	{
        		SetConsoleTextAttribute(hConsole, 6);
			}
			
			else if(i == 25 && j == 50)
        	{
        		SetConsoleTextAttribute(hConsole, 6);
			}
			
        	//CONDIÇÃO PRA PINTAR O TABULEIRO
        	//QUADRADOS DO TABULEIRO
        	//VERMELHO
        	//BARRA DE CIMA
            else if(i == 4 && j >= 8 && j <= 16) 
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
    getch(); //CONTINUAR CODIGO
}
