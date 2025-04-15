#ifndef ActivationFunctions_H_
#define ActivationFunctions_H_
#include <math.h>

// Sigmoid activatiom function.
double sigmoid_activation(double x) {
    return 1.0 / (1.0 + exp(-x));
} // most used one 

// Linear activation function
double linear_activation(double x) {
    return x;
} // Idk how to really use, so let it just be here LOL

// Relu's used as an approximation function
double relu(double x) {
    return (x >= 0) ? x : 0;
}

// Hyperbolic tan function
double hyper_tahn(double x) {
    return ((2 / (1 + exp(-2 * x))) - 1);
}

#endif 