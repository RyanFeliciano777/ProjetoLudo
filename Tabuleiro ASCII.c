#include <stdio.h>

#define VERMELHO "\x1b[31m"
#define AZUL "\x1b[34m"
#define VERDE "\x1b[32m"
#define AMARELO "\x1b[33m"
#define RESET "\x1b[0m"

main(){
    printf(""VERMELHO"%c%c%c%c%c%c%c%c%c%c%c%c%c"RESET"%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c"VERDE"%c%c%c%c%c%c%c%c%c%c%c%c%c"RESET"\n", 201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
	printf(""VERMELHO"%c"RESET"                       %c   %c   %c   %c                       "VERDE"%c"RESET"\n",186,186,186,186,186,186);
    printf(""VERMELHO"%c"RESET"                       %c%c%c%c%c%c%c%c%c%c%c%c%c                       "VERDE"%c"RESET"\n",186,204,205,205,205,206,205,205,205,206,205,205,205,185,186);
    printf(""VERMELHO"%c"RESET"                       %c   %c   %c   %c                       "VERDE"%c"RESET"\n",186,186,186,186,186,186);
    printf(""VERMELHO"%c"RESET"       "VERMELHO"%c%c%c%c%c%c%c%c%c"RESET"       %c%c%c%c%c%c%c%c%c%c%c%c%c"RESET"       "VERDE"%c%c%c%c%c%c%c%c%c"RESET"       "VERDE"%c"RESET"\n",186,201,205,205,205,203,205,205,205,187,204,205,205,205,206,205,205,205,206,205,205,205,185,201,205,205,205,203,205,205,205,187,186);
    printf(""VERMELHO"%c"RESET"       "VERMELHO"%c   %c   %c"RESET"       %c   %c   %c   %c"RESET"       "VERDE"%c   %c   %c"RESET"       "VERDE"%c"RESET"\n", 186,186,186,186,186,186,186,186,186,186,186,186);
    printf(""VERMELHO"%c"RESET"       "VERMELHO"%c%c%c%c%c%c%c%c%c"RESET"       %c%c%c%c%c%c%c%c%c%c%c%c%c       "VERDE"%c%c%c%c%c%c%c%c%c"RESET"       "VERDE"%c"RESET"\n", 186,204,205,205,205,206,205,205,205,185,204,205,205,205,206,205,205,205,206,205,205,205,185,204,205,205,205,206,205,205,205,185,186);
    printf("%c       "VERMELHO"%c   %c   %c"RESET"       %c   %c   %c   %c"RESET"       "VERDE"%c   %c   %c"RESET"       %c\n", 186,186,186,186,186,186,186,186,186,186,186,186);
    printf("%c       "VERMELHO"%c%c%c%c%c%c%c%c%c"RESET"       %c%c%c%c%c%c%c%c%c%c%c%c%c"RESET"       "VERDE"%c%c%c%c%c%c%c%c%c"RESET"       %c\n", 186,200,205,205,205,202,205,205,205,188,204,205,205,205,206,205,205,205,206,205,205,205,185,200,205,205,205,202,205,205,205,188,186);
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
    printf("%c       "AZUL"%c%c%c%c%c%c%c%c%c"RESET"       %c%c%c%c%c%c%c%c%c%c%c%c%c       "AMARELO"%c%c%c%c%c%c%c%c%c"RESET"       %c\n",186,201,205,205,205,203,205,205,205,187,204,205,205,205,206,205,205,205,206,205,205,205,185,201,205,205,205,203,205,205,205,187,186);
    printf("%c       "AZUL"%c   %c   %c"RESET"       %c   %c   %c   %c"RESET"       "AMARELO"%c   %c   %c"RESET"       %c\n", 186,186,186,186,186,186,186,186,186,186,186,186);
    printf(""AZUL"%c"RESET"       "AZUL"%c%c%c%c%c%c%c%c%c"RESET"       %c%c%c%c%c%c%c%c%c%c%c%c%c       "AMARELO"%c%c%c%c%c%c%c%c%c"RESET"       "AMARELO"%c"RESET"\n", 186,204,205,205,205,206,205,205,205,185,204,205,205,205,206,205,205,205,206,205,205,205,185,204,205,205,205,206,205,205,205,185,186);
    printf(""AZUL"%c"RESET"       "AZUL"%c   %c   %c"RESET"       %c   %c   %c   %c       "AMARELO"%c   %c   %c"RESET"       "AMARELO"%c"RESET"\n", 186,186,186,186,186,186,186,186,186,186,186,186);
    printf(""AZUL"%c"RESET"       "AZUL"%c%c%c%c%c%c%c%c%c"RESET"       %c%c%c%c%c%c%c%c%c%c%c%c%c       "AMARELO"%c%c%c%c%c%c%c%c%c"RESET"       "AMARELO"%c"RESET"\n", 186,200,205,205,205,202,205,205,205,188,204,205,205,205,206,205,205,205,206,205,205,205,185,200,205,205,205,202,205,205,205,188,186);
    printf(""AZUL"%c"RESET"                       %c   %c   %c   %c                       "AMARELO"%c"RESET"\n",186,186,186,186,186,186);
    printf(""AZUL"%c"RESET"                       %c%c%c%c%c%c%c%c%c%c%c%c%c                       "AMARELO"%c"RESET"\n",186,204,205,205,205,206,205,205,205,206,205,205,205,185,186);
    printf(""AZUL"%c"RESET"                       %c   %c   %c   %c                       "AMARELO"%c"RESET"\n",186,186,186,186,186,186);
    printf(""AZUL"%c%c%c%c%c%c%c%c%c%c%c%c%c"RESET"%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c"AMARELO"%c%c%c%c%c%c%c%c%c%c%c%c%c"RESET"\n", 200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
}
