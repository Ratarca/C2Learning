#include <stdio.h>

// O void 
int main (void){
	printf(" Estudando vetores ");
	
	// Vetor de três espaços com valores de tipo 3
	float nota[3];
	float media;
	
	nota[0] = 10;
	nota[1] = 6;
	nota[2] = 4;
	
	media = (nota[0] +nota[1] +nota[2]  )/3;
	printf("Sua nota é : %f",media);

	//// Outro jeito de declarar vetores
	int vetor_1[10] = {1,2,3,5,6,81,51,651,65,21}
	
	return 0;

	System("pause");
	
}
