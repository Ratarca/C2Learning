#include <stdio.h>

int main () {
	int i = 0 ;
	int counter = 10000;
	
	// while : enquanto a condi��o estiver sendo satisfeita execute
	// do while : enquanto a condi��o estiver sendo satisfeita execute veja que a condi��o do do ser� executada ao menos uma vez!!!
	do{
		
		i = i + 1;
		printf("%i \n",i);
	} while(i != counter );
	
	return 0;
}
