#include <stdio.h>
#include <windows.h>
#include <time.h>

#define VERMELHO SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4)
#define VERDE SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2)
#define AZUL SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1)
#define AMARELO SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6)
#define BRANCO SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)

int selecionarEscolhaJogadores = 0;
int numeroJogadores = 0;

int paginaAtualRegras = 1;

int selecionarAposta = 0;
float valorAposta = 0;

char escolhaRegras;
char Jogador[4][10];

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
	scanf("%9s", Jogador[1]);
	gotoxy(22,9);
	scanf("%9s", Jogador[2]);
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
	scanf("%9s", Jogador[1]);
	gotoxy(22,9);
	scanf("%9s", Jogador[2]);
	gotoxy(22,11);
	scanf("%9s", Jogador[3]);
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
	scanf("%9s", Jogador[1]);
	gotoxy(22,9);
	scanf("%9s", Jogador[2]);
	gotoxy(22,11);
	scanf("%9s", Jogador[3]);
	gotoxy(22,13);
	scanf("%9s", Jogador[4]);	
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

void nomeJogadores(){
	
	int x;
	int i;
	int y;
	
	if(numeroJogadores == 2)
	{
		i = 13;
	}
		
	else if(numeroJogadores == 3)
	{
		i = 12;
	}
		
	else if(numeroJogadores == 4)
	{
		i = 11;
	}
	
	//ATRIBUIR VALOR DE I PRA Y
	if(i == 13)
	{
		y = 13;
	}
	
	else if(i == 12)
	{
		y = 12;
	}
	
	else if(i == 11)
	{
		y = 11;
	}
	
	for(x = 1; x <= numeroJogadores; x++)
	{
		gotoxy(64,i);
		printf("Jogador   :%s", Jogador[x]);
		i++;
	}
	
	for(x = 1; x <= numeroJogadores; x++)
	{		
		gotoxy(71,y);
		    	
    	if(x == 1)
    	{
    		VERMELHO;
		}
		else if(x == 2)
		{
			VERDE;
		}
		else if(x == 3)
		{
			AZUL;
		}
		else if(x == 4)
		{
			AMARELO;
		}
		
        printf("[%i]", x);
        
        BRANCO;
        
        y++;
	}
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
   
    int i,j;	
    
 	 for (i = 0; i < 31; i++) {
        for (j = 0; j < 61; j++){
        	
        	//PINTAS AS PEÇAS DO TABULEIRO
	        if((i == 5 && j == 10) || (i == 5 && j == 14) || (i == 7 && j == 10) || (i == 7 && j == 14)){
	       		VERMELHO;
			} else if((i == 5 && j == 46) || (i == 5 && j == 50) || (i == 7 && j == 46) || (i == 7 && j == 50)){
        		VERDE;
			} else if((i == 23 && j == 10) || (i == 23 && j == 14) || (i == 25 && j == 10) || (i == 25 && j == 14)){
        		AZUL;
			} else if((i == 23 && j == 46) || (i == 23 && j == 50) || (i == 25 && j == 46) || (i == 25 && j == 50)){
        		AMARELO;
			}
			
        	//CONDIÇÃO PRA PINTAR OS QUADRADOS DO TABULEIRO
            else if((i == 4 && j >= 8 && j <= 16)  || (i >= 5 && j == 8 && i <= 8) || (i == 8 && j >= 9 && j <= 16) || (i >= 5 && j == 16 && i <= 8) || (i == 6 && j >= 9 && j <= 16) || (i >= 5 && j == 12 && i <= 7)){
    			VERMELHO;
			} else if((i == 22 && j >= 8 && j <= 16) || (i >= 22 && j == 8 && i <= 26) || (i == 26 && j >= 9 && j <= 16) || (i >= 22 && j == 16 && i <= 26) || (i == 24 && j >= 9 && j <= 16) || (i >= 23 && j == 12 && i <= 25)){
    			AZUL;
			} else if((i == 4 && j >= 44 && j <= 52) || (i >= 5 && j == 44 && i <= 8) || (i == 8 && j >= 45 && j <= 52) || (i >= 5 && j == 52 && i <= 7) || (i == 6 && j >= 45 && j <= 51) || (i >= 5 && j == 48 && i <= 7)){
    			VERDE;
			} else if((i == 22 && j >= 44 && j <= 52) || (i >= 23 && j == 44 && i <= 26) || (i == 26 && j >= 45 && j <= 52) || (i >= 23 && j == 52 && i <= 26) || (i == 24 && j >= 45 && j <= 52) || (i >= 23 && j == 48 && i <= 25)){
    			AMARELO;
			}
			
			//PINTAR AS EXTREMIDADES
			else if((i >= 0 && j == 0 && i <= 6) || (i == 0 && j >= 0 && j <= 12)){
				VERMELHO;
			} else if((i == 30 && j >= 0 && j <= 12) || (i >= 24 && j == 0 && i <= 30)){
				AZUL;
			} else if((i >= 0 && j == 60 && i <= 6) || (i == 0 && j >= 48 && j <= 60)){
				VERDE;
			} else if((i == 30 && j >= 48 && j <= 60) || (i >= 24 && j == 60 && i <= 30)){
				AMARELO;
			}
			
			//PINTAR AS DIREÇÃO DO TABULERO
			else if((i == 14 && j >= 5 && j <= 7) || (i == 14 && j >= 9 && j <= 11) || (i == 14 && j >= 13 && j <= 15) || (i == 14 && j >= 17 && j <= 19) || (i == 14 && j >= 21 && j <= 23) || (i == 16 && j >= 5 && j <= 7) || (i == 16 && j >= 9 && j <= 11) || (i == 16 && j >= 13 && j <= 15) || (i == 16 && j >= 17 && j <= 19) || (i == 16 && j >= 21 && j <= 23) || (i == 12 && j >= 5 && j <= 7) || (i == 13 && j == 4) || (i == 15 && j == 4)|| (i == 13 && j == 8) || (i == 15 && j == 5) || (i == 15 && j == 8) || (i == 15 && j == 12) || (i == 15 && j == 16) || (i == 15 && j == 20) || (i == 15 && j == 24)){
				VERMELHO;
			} else if((i == 2 && j >= 29 && j <= 31) || (i == 4 && j >= 29 && j <= 31) || (i == 6 && j >= 29 && j <= 31) || (i == 8 && j >= 29 && j <= 31) || (i == 10 && j >= 29 && j <= 31) || (i == 12 && j >= 29 && j <= 31) || (i == 2 && j >= 33 && j <= 35) || (i == 4 && j >= 33 && j <= 35) || (i == 3 && j == 28) || (i == 3 && j == 32) || (i == 3 && j == 36) || (i == 5 && j == 28) || (i == 5 && j == 32) || (i == 7 && j == 28) || (i == 7 && j == 32) || (i == 9 && j == 28) || (i == 9 && j == 32) || (i == 11 && j == 28) || (i == 11 && j == 32)){
				VERDE;
			} else if((i == 14 && j >= 37 && j <= 39) || (i == 14 && j >= 41 && j <= 43) || (i == 14 && j >= 45 && j <= 47) || (i == 14 && j >= 49 && j <= 51) || (i == 14 && j >= 53 && j <= 55) || (i == 16 && j >= 37 && j <= 39) || (i == 16 && j >= 41 && j <= 43) || (i == 16 && j >= 45 && j <= 47) || (i == 16 && j >= 49 && j <= 51) || (i == 16 && j >= 53 && j <= 55) || (i == 18 && j >= 53 && j <= 55) || (i == 15 && j == 36) || (i == 15 && j == 40) || (i == 15 && j == 44) || (i == 15 && j == 48) || (i == 15 && j == 52) || (i == 15 && j == 56) || (i == 17 && j == 52) || (i == 17 && j == 56)){
				AMARELO;
			} else if((i == 18 && j >= 29 && j <= 31) || (i == 20 && j >= 29 && j <= 31) || (i == 22 && j >= 29 && j <= 31) || (i == 24 && j >= 29 && j <= 31) || (i == 26 && j >= 29 && j <= 31) || (i == 28 && j >= 29 && j <= 31) || (i == 28 && j >= 25 && j <= 27) || (i == 26 && j >= 25 && j <= 27) || (i == 19 && j == 28) || (i == 19 && j == 32) || (i == 21 && j == 28) || (i == 21 && j == 32) || (i == 23 && j == 28) || (i == 23 && j == 32) || (i == 25 && j == 28) || (i == 25 && j == 32) || (i == 27 && j == 28) || (i == 27 && j == 32) || (i == 27 && j == 24)){
				AZUL;
			}
			
			printf("%c", Tabuleiro[i][j]);
			BRANCO;
        }
        printf("\n");
    }
    
    telaTabuleiro();
    nomeJogadores();
    
    getch();
}
