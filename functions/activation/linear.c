#include <stdio.h>

// Linear activation function
double linear_activation(double x) {
    return x;
}

// Derivative of the linear activation function
double linear_activation_derivative(double x) {
    (void)x; // Suppress unused parameter warning
    return 1.0;
}

// Example usage
int main() {
    double input = 2.5;
    double output = linear_activation(input);
    double derivative = linear_activation_derivative(input);

    printf("Input: %f\n", input);
    printf("Linear Activation Output: %f\n", output);
    printf("Derivative: %f\n", derivative);

    return 0;
}