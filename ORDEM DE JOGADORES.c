#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fun��o para organizar a ordem dos jogadores com base nos valores dos dados
void sortPlayers(int *players, int *diceValues, int numPlayers) {
    int i, j;
    for (i = 0; i < numPlayers - 1; i++) {
        for (j = 0; j < numPlayers - i - 1; j++) {
            if (diceValues[j] < diceValues[j + 1]) {
                // Troca os identificadores dos jogadores
                int tempPlayer = players[j];
                players[j] = players[j + 1];
                players[j + 1] = tempPlayer;
                
                // Troca os valores dos dados
                int tempDiceValue = diceValues[j];
                diceValues[j] = diceValues[j + 1];
                diceValues[j + 1] = tempDiceValue;
            }
        }
    }
}

// Fun��o para simular o lan�amento de um dado
int rollDice() {
    return rand() % 6 + 1; // Gera um n�mero aleat�rio entre 1 e 6
}

int main() {
	int i;
    srand(time(NULL)); // Inicializa o gerador de n�meros aleat�rios
    
    // Suponha que voc� tenha os identificadores dos jogadores
    int players[4] = {1, 2, 3, 4}; // Exemplo de identificadores de jogadores
    
    // Vari�veis para armazenar os valores dos dados de cada jogador
    int diceValues[4];
    
    // Pergunta a cada jogador se deseja jogar o dado
    printf("Jogador, deseja jogar o dado? (S/N)\n");
    for (i = 0; i < 4; i++) {
        char answer;
        printf("Jogador %d: ", players[i]);
        scanf(" %c", &answer);
        
        if (answer == 'S' || answer == 's') {
            // Jogador decide jogar o dado
            diceValues[i] = rollDice();
            printf("Jogador %d: Dado = %d\n", players[i], diceValues[i]);
        } else {
            // Jogador decide n�o jogar o dado
            printf("Jogador %d: N�o jogou o dado\n", players[i]);
            diceValues[i] = 0; // Define o valor do dado como 0 (ou outro valor que indique n�o jogado)
        }
    }
    
    // Organiza os jogadores com base nos valores dos dados
    sortPlayers(players, diceValues, 4); // 4 � o n�mero de jogadores
    
    // Exibe a ordem dos jogadores ap�s a organiza��o
    printf("\nOrdem dos jogadores ap�s organiza��o:\n");
    for (i = 0; i < 4; i++) {
        printf("Jogador %d: Dado = %d\n", players[i], diceValues[i]);
    }
    
    return 0;
}

