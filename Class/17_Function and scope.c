#include <stdio.h>

//Declare


// Funções e escopo

int main (void){
	float value = 10.1;
	float tax = 0.1;
	
	float calcular_strike(float x , float y);
	float striker = calcular_strike(value,tax);
	
	printf("Meu valor e : %.2f",striker);
	
	
	return 0;
}

// Type and functions
float calcular_strike(float price, float tax){
		
	float pricing = price * tax;
	
	return pricing; 
}

// Local variable and static variable 

/* 

A local é temporaria
A var estatica é fixa e fica lá armazenada não sumindo

int variavelLocal = 2
variavelLocal *= 2

static int variavelLocalEstatica = 2 ;
variavelLocalEstatica *= 2


*/


// global variable fora do contexto das funcoes

/* 

*/
