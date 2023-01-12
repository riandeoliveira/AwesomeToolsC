#ifndef _TOOLS_INTERFACE_
#define _TOOLS_INTERFACE_

#include "../modules/declarations.h"
#include "./calculator-interface.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void toolsInterface() {
    system("clear");

    bool exit = false;

    while (exit == false) {
        int option;

        header("             TOOLS");

        title("Select an option:");

        printf("\n1. Calculator");
        printf("\n2. Back to main");

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
            default:
                exit = true;
                system("clear");

                break;
        }
    }
}

#endif
