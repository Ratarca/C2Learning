#include <stdio.h>

int main (){
	int kidAge;
	kidAge = 12;
	
	//One type how declare variables
	int motherAge = 35;
	int fatherAge = 38;
	
	// Math operators : + | - | * | / 
	int sumAge;
	sumAge = kidAge + motherAge + fatherAge;
	
	printf("Kid age is : %i \n Mother age is : %i \n Father age is : %i \n",
		  kidAge,motherAge,fatherAge);
	
	printf("%i",sumAge);
	
	// ###########################################################
	
	printf("########################################################### \n");
	
	int variable_a = 10;
	int variable_b = 2;
	
	int sum_var;
	sum_var = variable_a + variable_b ;
	
	int sub_var;
	sub_var = variable_a - variable_b;
	
	int mult_var = variable_a * variable_b;
	int div_var = variable_a / variable_b;
	
	printf("%i %i %i %i",sum_var,sub_var,mult_var , div_var);
	return 0;
}
