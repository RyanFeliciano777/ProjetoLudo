#include <stdio.h>

void gotoxy(int x, int y) {
    printf("\033[%d;%df", y, x);
    fflush(stdout);
}

int main() {
    int largura = 10; // Largura da parede
    int altura = 5;   // Altura da parede

    // Loop para desenhar a parede
    int i , j;
    for (i = 0; i < altura; i++) {
        for (j= 0; j < largura; j++) {
            gotoxy(j+1, i+1); // +1 para evitar posições negativas
            printf("#");
        }
    }

    gotoxy(0, altura+2); // Mova o cursor para baixo após a parede

    return 0;
}

