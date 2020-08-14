#include <stdio.h>

int main (){
	
	int idade;
	//if...else if...else
	
	printf("Informe sua idade :");
	scanf("%i",&idade);
	
	if (idade >= 40){
		printf("Sua idade : %i \n logo idoso !",idade);
	}else if (idade >= 18 && idade < 38){
		printf("Sua idade : %i \n logo adulto !",idade);
	}else{
		printf("Menor de idade");
	};
	
	
	
	return 0;
	
}
