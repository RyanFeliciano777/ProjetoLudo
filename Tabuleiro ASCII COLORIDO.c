#include <stdio.h>

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
    printf("%c                       %c   %c   %c                 %c\n",186,186,186,186,186,186);
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
}
