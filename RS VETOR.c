#include <stdio.h>

//Solicitar 3284 numeros para um vetor passar para um vetor em ordem inversa e exibir os dois vetores

main(){
	
	int vetor1[10];
	int vetor2[10];
	int i;
	int j = 9;
	
	printf("Digite 10 numeros: \n");
	for(i=0;i<10;i++){
		scanf("%i", &vetor1[i]);
	}
	
	for(i=0;i<10;i++){
		vetor2[j] = vetor1[i];
		j--;
	}
	
	for(i=0;i<10;i++){
		printf("Vetor1: %i\n", vetor1[i]);
	}
	
	for(i=0;i<10;i++){
		printf("Vetor2: %i\n", vetor2[i]);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}
