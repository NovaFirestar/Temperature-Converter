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
        };
        printf("Enter the temperature for conversion: ");
        scanf("%f", &fahrenheit);

        switch (choice) {
            case 1:
               celsius = (fahrenheit - 32)* 5 / 9;
               printf("Result: %.2f\n", celsius);
               break;
            case 2:
               fahrenheit = (celsius * 9/5) + 32;
               printf("Result: %.2f\n", fahrenheit);
               break;

            default:
               printf("Invalid input, please try again.\n");
         }
    } while(1);
    return 0;
}
