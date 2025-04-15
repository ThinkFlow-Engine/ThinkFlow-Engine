#include "activation.h"

// Sigmoid activatiom function.
double sigmoid_activation(double x) {
    return 1.0 / (1.0 + exp(-x));
} // most used one 

