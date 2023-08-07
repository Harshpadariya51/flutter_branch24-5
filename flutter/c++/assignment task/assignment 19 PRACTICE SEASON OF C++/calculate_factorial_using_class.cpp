/*3. Wap program to calculate Factorial of a number using class */
#include <iostream>

class FactorialCalculator {
public:
    FactorialCalculator(int num) : number(num) {}

    int calculate() {
        if (number < 0) {
            std::cerr << "Factorial is not defined for negative numbers." << std::endl;
            return -1; 
        }

        int result = 1;
        for (int i = 1; i <= number; ++i) {
            result *= i;
        }
        return result;
    }

private:
    int number;
};

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    FactorialCalculator calculator(num);
    int factorial = calculator.calculate();

    if (factorial != -1) {
        std::cout << "Factorial of " << num << " is: " << factorial << std::endl;
    }

    return 0;
}

