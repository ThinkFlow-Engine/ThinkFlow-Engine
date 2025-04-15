#include "activation.h"

// Relu's used as an approximation function
double relu(double x) {
    return (x >= 0) ? x : 0;
}