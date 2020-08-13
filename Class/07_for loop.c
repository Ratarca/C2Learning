#include <stdio.h>

int main (){
	int counter;
	int number_stay = 0;
	
	/*
		for (Initialization; conditionBreak; increment){
			#execute this
		}
	*/
	
	for (counter=0; counter <=10; counter = counter +1){
		number_stay = counter * 2;
		printf("%i \n", number_stay);
	}
	
	return 0;
}
