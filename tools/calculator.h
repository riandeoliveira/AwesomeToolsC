#ifndef _CALCULATOR_
#define _CALCULATOR_

#include <math.h>
#include <stdio.h>

double valueX = 0;
double valueY = 0;

void getValues(double x, double y) {
    valueX = x;
    valueY = y;
}

double sum() {
    return valueX + valueY;
}

double subtract() {
    return valueX - valueY;
}

double multiply() {
    return valueX * valueY;
}

double divide() {
    return valueX / valueY;
}

double exponentiate() {
    return pow(valueX, valueY);
}

double percentage() {
    return multiply() / 100;
}

#endif
