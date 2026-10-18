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

        int condition;

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
                    double celciustofahrenheit;
                    celciustofahrenheit = 1.93408;
                    printf("Please enter input (Celcius):\n");
                    scanf("%lf",&celciustofahrenheit);
                    if (celciustofahrenheit >= -273.15) {
                        double fahrenheit_converted = (celciustofahrenheit * 9 / 5) + 32;
                        printf("%lf in Fahrenheit is %lf\nReturning to main menu\n",celciustofahrenheit,fahrenheit_converted);
                    } else {
                        printf("Invalid Input\n");
                    }
                    break;
                case 2:
                    double celciustokelvin;
                    celciustokelvin = 1.93408;
                    printf("Please enter input (Celcius):\n");
                    scanf("%lf",&celciustokelvin);
                    if (celciustokelvin >= -273.15) {
                        double kelvin_converted = celciustokelvin + 273;
                        printf("%lf Celcius in Kelvin is %lf\nReturning to main menu\n",celciustokelvin,kelvin_converted);
                    } else {
                        printf("Invalid Input\n");
                    }
                    break;
                case 3:
                    double fahrenheittocelcius;
                    fahrenheittocelcius = 1.93408;
                    printf("Please enter input (Fahrenheit):\n");
                    scanf("%lf",&fahrenheittocelcius);
                    if (fahrenheittocelcius >= -459.67) {
                        double celcius_converted = ((fahrenheittocelcius-32) * 5 / 9);
                        printf("%lf Fahrenheit in Celcius is %lf\nReturning to main menu\n",fahrenheittocelcius,celcius_converted);
                    } else {
                        printf("Invalid Input\n");
                    }
                    break;
                case 4:
                    clearScreen();
                    printf("Returning to main menu\n");
                    break;
                case 5:
                    printf("Exiting Interactive Converter");
                    main_menu_case = 5;
                    break;
                default:
                    printf("Invalid Input\n");
                    break;
                }
                break;
            case 2:
                int case2_selection = 0;
                printf("Please select a conversion option:\n");
                printf("Option 1: Kilometers to Miles\n");
                printf("Option 2: Miles to Kilometers\n");
                printf("Option 3: Back to Main Menu\n");
                printf("Option 4: Exit Converter\n");
                printf("Please enter a option:\n");
                scanf("%d", &case2_selection);
                switch (case2_selection) {
                case 1:
                    double kilometerstomiles;
                    kilometerstomiles = 1.93408;
                    printf("Please enter input (Kilometers):\n");
                    scanf("%lf",&kilometerstomiles);
                    if (kilometerstomiles) {
                        double miles_converted = kilometerstomiles * 0.621371;
                        printf("%lf Miles in Kilometers is %lf\nReturning to main menu\n",kilometerstomiles,miles_converted);
                    } else {
                        printf("Invalid Input\n");
                    }
                    break;
                case 2:
                    double milestokm;
                    milestokm = 1.93408;
                    printf("Please enter input (Miles):\n");
                    scanf("%lf",&milestokm);
                    if (milestokm) {
                        double km_converted = milestokm * 1.60934;
                        printf("%lf Miles in Kilometers is %lf\nReturning to main menu\n",milestokm,km_converted);
                    } else {
                        printf("Invalid Input\n");
                    }
                    break;
                case 3:
                    clearScreen();
                    printf("Returning to main menu\n");
                    break;
                case 4:
                    printf("Exiting Interactive Converter");
                    main_menu_case = 5;
                    break;
                default:
                    printf("Invalid Input\n");
                    break;
                }
                break;
            case 3:
            int case3_selection = 0;
                printf("Please select a conversion option:\n");
                printf("Option 1: INR to USD\n");
                printf("Option 2: USD to INR\n");
                printf("Option 3: Back to Main Menu\n");
                printf("Option 4: Exit Converter\n");
                printf("Please enter a option:\n");
                scanf("%d", &case3_selection);
                switch (case3_selection) {
                case 1:
                    double kilometerstomiles;
                    kilometerstomiles = 1.93408;
                    printf("Please enter input (Kilometers):\n");
                    scanf("%lf",&kilometerstomiles);
                    if (kilometerstomiles) {
                        double miles_converted = kilometerstomiles * 0.621371;
                        printf("%lf Miles in Kilometers is %lf\nReturning to main menu\n",kilometerstomiles,miles_converted);
                    } else {
                        printf("Invalid Input\n");
                    }
                    break;
                case 2:
                    double milestokm;
                    milestokm = 1.93408;
                    printf("Please enter input (Miles):\n");
                    scanf("%lf",&milestokm);
                    if (milestokm) {
                        double km_converted = milestokm * 1.60934;
                        printf("%lf Miles in Kilometers is %lf\nReturning to main menu\n",milestokm,km_converted);
                    } else {
                        printf("Invalid Input\n");
                    }
                    break;
                case 3:
                    clearScreen();
                    printf("Returning to main menu\n");
                    break;
                case 4:
                    printf("Exiting Interactive Converter");
                    main_menu_case = 5;
                    break;
                    default:
                    printf("Invalid Input\n");
                    break;
                }
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
