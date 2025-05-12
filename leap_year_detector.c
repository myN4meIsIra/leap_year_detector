/*
By Ira Garrett
OS: Ubuntu
Compiler flags:
	from int isLeapYear():, a return of 0 "means not a leap year", and a return of 1 means "a leap year"

Description:
	Given a year integer provided by the user, will return TRUE if the provided year is a Leap Year, FALSE otherwise.
*/

//libraries
#include <stdio.h>
#include <stdlib.h>

//variable
int year;
int firstLeapYear;
char* result;

//testing function
int isLeapYear(int year){
	
	if((year % 4)==0){
		if((year % 100)==0){
			if((year % 400)==0)
				return 1;
			return 0;			
		}
		return 1;	
	}

	return 0;
}


//take input from ther terminal, if non-existent, ask user for input
//main function
int main(int argc, char *argv[]){
	
	//if a year is provided in the execution, use it, otherwise, ask the user for one
	if(argc == 1){
		printf("You didn't include a year when executing this program, \nPlease enter a year to test.\n");
		scanf("%d",&year); 	
	}
	else if(argc == 2){
		//convert the *char (string) from the terminal execution to integer 
		year = atoi(argv[1]);
	}
	
	
	//differnet results from the testing function
	switch(isLeapYear(year)){
		case 0:
			result = "False";
			break;
		case 1:
			result = "True";
			break;
		case 2:
			result = "False, due to it being before the start of the implementation of Leap Year";
			break;
	}
	
	//output
	printf("%d is a leap year:\n\t %s\n",year,result);

	return 0;
}
