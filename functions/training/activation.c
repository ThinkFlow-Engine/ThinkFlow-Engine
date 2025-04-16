// This code selects best. Legacy. C++ code is in usage for now (16 Apr 2025);
#include <stdio.h>

struct pair_string_double {
    char* first;
    double second;
};

struct pair_string_double inputs = {};

void fill_inputs (double linear, double step, double sigmoid, double tahn) {
    struct pair_string_double inputs = {{'linear', linear}, {'step', step}, {'sigmoid', sigmoid}, {'tahn', tahn}};
}