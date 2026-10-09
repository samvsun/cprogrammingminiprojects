/* Project 1: Interactive Unit & Temperature Converter
Functional Requirements
Interactive Menu Loop:
Keep the program running inside a do-while loop until the user explicitly selects the Exit option.
Clear the menu display for each iteration and print options clearly. */

#include <stdio.h>
int x = 0;
int main() {
    do {
        printf("Welcome to the Interactive Converter Menu\nHere's a selection of options:\n");
        printf("Option 1: Temperature Conversion Mode\n");
        printf("Option 2: Distance Conversion Mode\n");
        printf("Option 3: Currency Conversion Mode\n");
        printf("Option 4: Analog to Digital Voltage Conversion Mode\n");
        printf("Option 5: Exit Converter\n");
        printf("Please enter a option:\n");

        scanf("%d", &x);

        switch (x) {
            case 1:
                int y = 0;
                printf("Please select a conversion option:\n");
                printf("Option 1: Celsius to Fahrenheit\n");
                printf("Option 2: Celsius to Kelvin\n");
                printf("Option 3: Fahrenheit to Celsius\n");
                printf("Option 4: Back to Main Menu\n");
                printf("Option 5: Exit Converter\n");
                printf("Please enter a option:\n");
                scanf("%d",&y);
                switch (y)
                {
                case 1:
                    printf("1-1\n");
                    
                    break;
                case 2:
                    printf("1-2\n");
                    break;
                default:
                    printf("Invalid Input\n");
                }
                break;
            case 2:
                printf("Case 2");
                break;
            default:
                printf("Invalid Input\n");
        }


    } while (x != 5);
}
