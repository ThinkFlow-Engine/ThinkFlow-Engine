// This code gets statistics from specific files and prints analyzis for each function 

#include <iostream>
#include <vector>
#include <string>

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
// Colors from: https://gist.github.com/Kielx/2917687bc30f567d45e15a4577772b02

struct string_double_pair {
    std::string type;
    double value;
};

class training_activation_data {
    public:
        std::vector <string_double_pair> inputs;
        training_activation_data (double linear, double step, double tahn, double sigmoid) {
            inputs[0].type = "linear";
            inputs[0].value = linear;
            inputs[1].type = "step";
            inputs[1].value = step;
            inputs[2].type = "tahn";
            inputs[2].value = tahn;
            inputs[3].type = "sigmoid";
            inputs[3].value = sigmoid;
        }
    private:
        double good_green = 95.0, average_yellow = 85.0;
        void print_difference (std::string text, double probability) { // red, blue, green 
            if (probability >= good_green) {
                std::cout << GREEN << text << " ~~ " << probability << "%." << RESET;
            }
            else {
                if (probability < good_green && probability >= average_yellow) {
                    std::cout << YELLOW << text << " ~~ " << probability << "%." << RESET;
                }
                else {
                    std::cout << RED << text << " ~~ " << probability << "%." << RESET;
                }
            }
        }
};

int main () {

    return 0;
}