#include <stdio.h>

/*
	Review
		For and While
		If & switch
		
		Functions and types return
		Using functions inside functions
		Using many types : char / float / int / vector
		
		Global variables
		Local variable vs Static variables
*/



//

int main(void){
	
	//Evocate functions
	float calculate_square(float x, float y);
	int hour_bonus(int hours);
	char employee_now(int age);
	
	//Normally variables
	float side_one =10.33;
	float side_two = 5.2;
	float area = calculate_square(side_one , side_two);
	
	printf("%f \n",area);
	// Finish
	return 0;
}


float calculate_square(float side_1, float side_2){
	float area;
	
	printf("Using calculate square ! \n");
	area = side_1 * side_2;
	return area;
}

char employee_now(int age){
	
	char worked;
	
	if (age >= 18){
		worked = "YES"
	}else{
		worked = "NO"
	};
	
	return worked;
}

int hour_bonus(int hour){
	
	int bonus;
	
	if (hour >1200){
	}else if(hour >1000){
	}else if(hour > 9000){
	}else if(hour >8030){
	}else if(hour = 8000){
	}else{
	}
	
	
	return bonus;
}
