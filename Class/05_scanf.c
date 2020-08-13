#include <stdio.h>

int main (){
	int base;
	int altura;
	int area;
	
	int triangleArea;
	
	// how to create input 
	// scanf(type_variable, &target_variable_fill)
	printf("Declare o valor da base : ");
	scanf("%i",&base);
	
	printf("Declare o valor da altura : ");
	scanf("%i",&altura);
	
	printf("Declare o valor da area : ");
	scanf("%i",&area);
	
	triangleArea = base*altura;
	printf("%i %i %i",base,altura,area);
	printf("My triangle area is : %i",triangleArea);
	
	return 0;
}
