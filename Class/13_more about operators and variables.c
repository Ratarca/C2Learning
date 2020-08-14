#include <stdio.h>

int main(void) {
	printf("Estudando outros operadores");
	
	int var_a = 1;
	int var_b = 3;
	
	int i = 0;
	int j = 0;
	var_a > var_b ? printf("a > b") : printf("b > a");
	
	for (i; i <= 10 ; ++i){
		printf("%i",i);	
		for (j;j <= 5; ++j){
			printf("%j",j)
		}
	}
	
	return 0;
	
}
