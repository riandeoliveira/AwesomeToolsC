#ifndef _GAMES_INTERFACE_
#define _GAMES_INTERFACE_

#include "../modules/declarations.h"
#include "./calculator-interface.h"
#include "./tic-tac-toe-interface.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void gamesInterface() {
    system("cls");

    bool exit = false;

    while (exit == false) {
        int option;

        header("             GAMES");

        title("Select an option:");

        printf("\n1. Tic Tac Toe");
        printf("\n2. Back to tools");
        printf("\n3. Exit");

        printf("\n\nOption: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                exit = true;
                ticTactToeInterface();

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
