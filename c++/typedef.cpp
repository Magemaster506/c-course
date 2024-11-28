#include <iostream>
#include <vector>

// typedef = reserved keyword used to create an additional name for another data type
// helps with readability and reduces typos
//typedef std::string text_t;
typedef std::vector<std::pair<std::string, int>> pairlist_t; // creates a typedef of this long datatype under "pairlist_t"
typedef int number_t;

// use the 'using' keyword (recommended as it works better with templates)
using text_t = std::string;

int main(){

    pairlist_t pairlist;

    text_t firstName;
    firstName = "Mike";
    std::cout << firstName << "\n";

    number_t age = 21;
    std::cout << age << "\n";

    return 1;
}