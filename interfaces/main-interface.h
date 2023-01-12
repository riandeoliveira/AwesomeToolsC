#ifndef _MAIN_INTERFACE_
#define _MAIN_INTEFACE_

#include "../modules/components.h"
#include "./tools-interface.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void mainInterface() {
    system("clear");

    bool exit = false;

    while (exit == false) {
        int option;

        header("         AWESOME TOOLS");

        title("Select an option:");

        printf("\n1. Games");
        printf("\n2. Tools");
        printf("\n3. Exit");

        printf("\n\nOption: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                exit = true;

                break;
            case 2:
                exit = true;
                toolsInterface();

                break;
            case 3:
                exit = true;
                system("clear");

                break;
            default:
                exit = true;
                system("clear");

                break;
        }
    }
}

#endif
