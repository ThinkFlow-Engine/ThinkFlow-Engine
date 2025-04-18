#include "activation.h"

// Hyperbolic tan function
double hyper_tahn(double x) {
    return ((2 / (1 + exp(-2 * x))) - 1);
}