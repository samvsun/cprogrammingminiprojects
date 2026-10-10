/* Project 1: Interactive Unit & Temperature Converter
Functional Requirements
Interactive Menu Loop:
Keep the program running inside a do-while loop until the user explicitly selects the Exit option.
Clear the menu display for each iteration and print options clearly. */

#include <stdio.h>
#include <stdlib.h>
void clearScreen() {
    system("cls");
}

int main_menu_case = 0;
int main() {
    do {
        printf("Welcome to the Interactive Converter Menu\nHere's a selection of options:\n");
        printf("Option 1: Temperature Conversion Mode\n");
        printf("Option 2: Distance Conversion Mode\n");
        printf("Option 3: Currency Conversion Mode\n");
        printf("Option 4: Analog to Digital Voltage Conversion Mode\n");
        printf("Option 5: Exit Converter\n");
        printf("Please enter a option:\n");

        scanf("%d", &main_menu_case);
        clearScreen();
        switch (main_menu_case) {
            case 1:
                int case1_selection = 0;
                printf("Please select a conversion option:\n");
                printf("Option 1: Celsius to Fahrenheit\n");
                printf("Option 2: Celsius to Kelvin\n");
                printf("Option 3: Fahrenheit to Celsius\n");
                printf("Option 4: Back to Main Menu\n");
                printf("Option 5: Exit Converter\n");
                printf("Please enter a option:\n");
                scanf("%d", &case1_selection);
                switch (case1_selection) {
                case 1:
                    double celcius;
                    celcius = 1.93408;
                    printf("Please enter input (Celcius):\n");
                    scanf("%lf",&celcius);
                    printf("%lf",celcius);
                    
                    break;
                case 2:
                    printf("1-2\n");
                    break;
                case 4:
                    clearScreen();
                    break;
                default:
                    printf("Invalid Input\n");
                    break;
                }
                break;
            case 2:
                printf("Case 2");
                break;
            case 5:
                printf("Exiting Interactive Converter");
                break;
            default:
                printf("Invalid Input\n");
                break;
        }
    } while (main_menu_case != 5);
}
