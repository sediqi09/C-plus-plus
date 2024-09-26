#include <iostream>

bool is35 (int x) {
    if ((x % 3 == 0) && (x % 5 == 0)) {
        return false;
    }
    return ((x % 3 == 0) || (x % 5 == 0));
}

int main () {
    std::cout << std::boolalpha;

    std::cout << "is35(5) = " << is35(5) << std::endl;
    std::cout << "is35(8) = " << is35(8) << std::endl;
    std::cout << "is35(15) = " << is35(15) << std::endl;
    std::cout << "is35(9) = " << is35(9) << std::endl;
    
    return 0;
}