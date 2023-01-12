#ifndef _CALCULATOR_INTERFACE_
#define _CALCULATOR_INTERFACE_

#include "../modules/components.h"
#include "../tools/calculator.h"
#include "./tools-interface.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void calculatorInterface() {
    system("cls");

    bool exit = false;

    double valueX;
    double valueY;
    char operation;
    double result;

    header("           CALCULATOR");

    printf("\nFirst value: ");
    scanf("%lf", &valueX);

    printf("Second value: ");
    scanf("%lf", &valueY);

    printf("\nSelect an operation:\n");

    printf("\na. Addition");
    printf("\nb. Subtraction");
    printf("\nc. Multiplication");
    printf("\nd. Division");
    printf("\ne. Exponentiation");
    printf("\nf. Percentage");

    printf("\n\nOperation: ");
    scanf(" %c", &operation);

    switch (operation) {
        case 'a':
        case 'A':
            result = sum(valueX, valueY);
            printf("\nResult: %.1lf + %.1lf = %.1lf", valueX, valueY, result);

            break;
        case 'b':
        case 'B':
            result = subtract(valueX, valueY);
            printf("\nResult: %.1lf - %.1lf = %.1lf", valueX, valueY, result);

            break;
        case 'c':
        case 'C':
            result = multiply(valueX, valueY);
            printf("\nResult: %.1lf * %.1lf = %.1lf", valueX, valueY, result);

            break;
        case 'd':
        case 'D':
            result = divide(valueX, valueY);
            printf("\nResult: %.1lf / %.1lf = %.1lf", valueX, valueY, result);

            break;
        case 'e':
        case 'E':
            result = exponentiate(valueX, valueY);
            printf("\nResult: %.1lf ^ %.1lf = %.1lf", valueX, valueY, result);

            break;
        case 'f':
        case 'F':
            result = percentage(valueX, valueY);
            printf("\nResult: %.1lf%% of %.1lf is %.1lf", valueX, valueY, result);

            break;
        default:
            break;
    }

    footer();

    while (!exit) {
        int option;

        printf("\nSelect an option:\n");

        printf("\n1. Calculate more");
        printf("\n2. Back to tools");
        printf("\n3. Exit");

        printf("\n\nOption: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                exit = true;
                calculatorInterface();

                break;
            case 2:
                exit = true;
                toolsInterface();

                break;
            case 3:
                exit = true;
                system("cls");

                break;
            default:
                exit = true;
                system("cls");

                break;
        }
    }
}

#endif
