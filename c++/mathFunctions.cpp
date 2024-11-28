#include <iostream>
#include <cmath>

int main(){

    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y); //returns the largest value
    z = std::min(x, y); //returns the smallest value
    z = pow (2, 3) //2^3
    z = sqrt(9) //root of 9
    z = abs(-3); //absolute value (absolute value is difference from 0 = 3)
    z = round(x); //regular rounding
    z = ceil(x); //allways rounds up
    z = floor(x); //allway rounds down

    std::cout << z;

    return 0;
}