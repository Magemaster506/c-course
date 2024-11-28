#include <iostream>

int main(){
    const double PI = 3.14159; 
    // naming convention for constant variables is all uppercase
    // constant variables can NOT be reassigned
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout << circumference << "cm";

    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    return 0;
}