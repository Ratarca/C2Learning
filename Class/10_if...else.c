#include <stdio.h>

int main (){
	
	int idade;
	//if...else
	printf("Informe sua idade :");
	scanf("%i",&idade);
	
	if (idade >= 18){
		printf("Sua idade : %i \n logo pode entrar na festa !",idade);
	}else{
		printf("Esta barrado amigao");
	};
	
	
	
	return 0;
	
}
