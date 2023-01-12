#ifndef _CALCULATOR_
#define _CALCULATOR_

#include <math.h>
#include <stdio.h>

double sum(double valueX, double valueY) {
    return valueX + valueY;
}

double subtract(double valueX, double valueY) {
    return valueX - valueY;
}

double multiply(double valueX, double valueY) {
    return valueX * valueY;
}

double divide(double valueX, double valueY) {
    return valueX / valueY;
}

double exponentiate(double valueX, double valueY) {
    return pow(valueX, valueY);
}

double percentage(double valueX, double valueY) {
    return multiply(valueX, valueY) / 100;
}

#endif
