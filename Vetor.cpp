#include<stdio.h>

int main(){
	
	int vetA [5];
	int vetB [5];
	int pos=0;
	
	for (pos=0; pos<=5; pos++){
		printf("Digite um numero: ");
		scanf("%i", &vetA[pos]);
	}
	
	for (pos=0; pos<=5; pos++){
		vetB[0] = vetA[5];
		vetB[1] = vetA[4];
		vetB[2] = vetA[3];
		vetB[3] = vetA[2];
		vetB[4] = vetA[1];
		vetB[5] = vetA[0];
	}
	
	for (pos=0; pos<=5; pos++){
		printf("Conteudo do vetorB: %i\n", vetB[pos]);
	}
	
	
	return 0;
}

