#include <iostream>

int main(){

    char op; //operator
    double num1;
    double num2;
    double result;

    std::cout << "************ CALCULATOR ************";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num1;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "result: " << result << "\n";
            break;
        case '-':
            result = num1 - num2;
            std::cout << "result: " << result << "\n";
            break;
        case '*':
            result = num1 * num2;
            std::cout << "result: " << result << "\n";
            break;
        case '/':
            result = num1 / num2;
            std::cout << "result: " << result << "\n";
        default:
            std::cout << "Please enter a valid operator: (+ - * /)";
            break;
    }

    std::cout << "************************************";

    return 0;
}