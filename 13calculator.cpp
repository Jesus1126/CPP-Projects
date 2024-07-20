#include<iostream>

int main() {

    char op;
    double num1;
    double num2;
    double result = 0;

    std::cout << "************* CALCULATOR *************\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            std::cout << "Invalid input";

    }

    std::cout << "The result is: " << result << '\n';

    std::cout << "**************************************";

    return 0;
}