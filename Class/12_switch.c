#include <stdio.h>

int main (){
	printf(" Estudando switch ");
	
	int numero_rua;
	/*
		O switch é similar a um case when in pl sql
	*/
	
	printf("Digite o numero da sua rua de 0 a 3 : \n");
	scanf("%i",&numero_rua);
	
	switch(numero_rua){
		case 1:
			printf("Primeira rua");
			break;
		case 2:
			printf("Segunda rua");
			break;
		case 3:
			printf("Terceira rua");
			break;
		default:
			printf("Rua de barro");
			break;
	}
	
}
