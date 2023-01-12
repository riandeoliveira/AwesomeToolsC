#ifndef _COMPONENTS_
#define _COMPONENTS_

#include <stdio.h>
#include <string.h>

void bar(char separator) {
    const unsigned short int BAR_LENGTH = 30;

    for (int i = 0; i <= BAR_LENGTH; i++) {
        printf("%c", separator);
    }
}

void breakLine() {
    printf("\n");
}

void header(char title[]) {
    unsigned short int titleLength = strlen(title);

    breakLine();
    bar('=');
    printf("\n%s", title);
    breakLine();
    bar('=');
    breakLine();
}

void title(char title[]) {
    printf("\n%s\n", title);
    bar('-');
}

void footer() {
    breakLine();
    breakLine();
    bar('=');
    breakLine();
}

#endif
