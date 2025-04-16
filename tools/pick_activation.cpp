#include <iostream>
#include <string>

struct string_double_pair {
    std::string type;
    double value;
};

class training_activation_data {
    public:
        string_double_pair inputs;
        training_activation_data (double linear, double step, double tahn, double sigmoid) {
            inputs = {{"linear", linear}, {"step", step}, {"sigmoid", sigmoid}, {"tahn", tahn}};
        }
};