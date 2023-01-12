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

    double firstValue;
    double secondValue;

    header("           CALCULATOR");

    printf("\nFirst value: ");
    scanf("%lf", &firstValue);

    printf("Second value: ");
    scanf("%lf", &secondValue);

    getValues(firstValue, secondValue);

    title("Results:");

    printf("\nAddition:       %.1lf + %.1lf = %.1lf", valueX, valueY, sum());
    printf("\nSubtraction:    %.1lf - %.1lf = %.1lf", valueX, valueY, subtract());
    printf("\nMultiplication: %.1lf * %.1lf = %.1lf", valueX, valueY, multiply());
    printf("\nDivision:       %.1lf / %.1lf = %.1lf", valueX, valueY, divide());
    printf("\nExponentiation: %.1lf ^ %.1lf = %.1lf", valueX, valueY, exponentiate());
    printf("\nPercentage:     %.1lf%% of %.1lf = %.1lf", valueX, valueY, percentage());

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
