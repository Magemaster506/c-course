#include <iostream>

int main(){
    double x = (int) 3.14;
    char y = 100;
    
    std::cout << x << "\n"; // truncated
    std::cout << y << "\n"; // d (ascii table)

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << score << "%";

    return 0;
}