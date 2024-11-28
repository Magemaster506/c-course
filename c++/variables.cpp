#include <iostream>

int main(){
    // integer (whole number)
    int age = 21;
    int year = 2023;
    int days = 7.5;
    std::cout << days << "\n";

    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;
    std::cout << price << "\n";

    // char (single character)
    char grade = 'A';
    char initial = 'B';
    std::cout << initial << "\n";

    // boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;

    // string (objects that represents a sequence of text)
    std::string name = "Mike";
    std::string day = "Wednesday";
    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old." << "\n";
    std::cout << day;

    return 0;
}