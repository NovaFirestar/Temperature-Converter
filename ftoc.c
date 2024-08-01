#include <stdio.h>

int main() {
   int choice;	
   float fahrenheit, celsius;

   do {
	printf("1. Fahrenheit to Celsius\n");
	printf("2. Celsius to Fahrenheit\n");
	printf("3. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);
	if (choice == 3) {
	    break;
	}

        if(choice == 1 || choice == 2) {
  	 printf("Enter the temperature for conversion: ");
	 if (choice == 1) {
	     scanf("%f", &fahrenheit);
	     celsius = (fahrenheit - 32)* 5 / 9;
	     printf("Result: %.2f\n", celsius);
	     } else if (choice == 2) {
	        scanf("%f", &celsius);
	        fahrenheit = (celsius * 9/5) + 32;
	        printf("Result: %.2f\n", fahrenheit);
	     }
	   } else {
	       printf("Invalid input, please try again.\n");
	 }

    } while(1);
    return 0;
}


