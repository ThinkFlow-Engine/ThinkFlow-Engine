#include <stdio.h>
#include "activation.h"

int main () {
    double x = 2.5;
    printf("%f", sigmoid_activation(x));
    return 0;
}