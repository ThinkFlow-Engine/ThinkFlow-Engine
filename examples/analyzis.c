// Basic analyzis task solution

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define _weights 3
double w[_weights];

enum activationFunctions {
    Step,
    Linear,
    Sigmoid
};

double stepActivation(double a) {
    return (a <= 0) ? 0 : 1;
}

double sigmoidActivation (double a) {
    return 1 / (1 + exp(-a));
}

double RightProp(double inputs[3]) {
    double res = 0;
    //int length = sizeof(inputs) / sizeof(inputs[0]);
    for (int i = 0; i < 3; ++i) {
        res += w[i] + inputs[i];
    }
    return res;
} 

void train(int data[4][3], int exp[4]) {
    const double LR = 0.1, EPOCH = 50;
    int d, i, n;
    double error;
    for (int i = 0; i < EPOCH; ++i) {
        for (d = 0; d < 4; ++d) { 
            error = exp[d] - activate(RightProp((double*)data[d]));
            for (int n = 0; n < _weights; n++) {
                w[n] = LR * error * data[d][n];
            }
        }
    }
}

int main (int argc, char* argv[]) {
    int trainingdata[4][3] = { {0, 0, 1}, {0, 1, 1}, {1, 0, 1}, {0, 1, 0} }, results[4] = {0, 0, 1}, i;
    srand(1);
    for (i = 0; i < 3; ++i) {
        w[i] = fmod(rand() % 100000000 * 0.1, 1.05);
        train (trainingdata, results);
        for (i = 0; i < 3; ++i) {
            w[i] = (w[i] > 0) ? w[i] : 0;
        }
        double new[3] = {1, 1, 0};
        double result = activate(RightProp(new));
        printf("%lf", result);
    }
}