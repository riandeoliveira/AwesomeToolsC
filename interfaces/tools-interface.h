#ifndef _TOOLS_INTERFACE_
#define _TOOLS_INTERFACE_

#include "../modules/declarations.h"
#include "./calculator-interface.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void toolsInterface() {
    system("cls");

    bool exit = false;

    while (exit == false) {
        int option;

        header("             TOOLS");

        title("Select an option:");

        printf("\n1. Calculator");
        printf("\n2. Back to main");
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
                mainInterface();

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
