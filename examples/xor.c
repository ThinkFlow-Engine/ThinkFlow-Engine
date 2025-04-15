#include <stdlib.h>
#include <stdio.h>

#define _weights 2
double weights [_weights];

double activation (double x) {
    return (x <= 0) ? 0 : 1;
}

