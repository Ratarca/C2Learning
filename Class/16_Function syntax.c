#include <stdio.h>

// Funções
void segunda_funcao(void){
	printf("Segunda funcao")
}


int main (){
	
	// Before Main
	segunda_funcao();
	
	// After main
	// Declare type structure function
	void primeira_funcao(void);
	// Execute function
	primeira_funcao();
	
	return 0;
}

void primeira_funcao(void){
	printf("Minha primeira funcao ")
}
