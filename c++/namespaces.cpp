#include <iostream>

// namespaces provide a solution for preventing name conflicts
// they allow for multiple entities to have identical names as long as the namespaces are different

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){
    using namespace first;
    // using std::cout;

    std::cout << x; // double colon (scope resolution operator)
    std::cout << second::x;

    return 0;
}