#include "activation.h"

// Step activation function 
double step_activation(double x) {
    return x >= 0 ? 1.0 : 0.0;
}