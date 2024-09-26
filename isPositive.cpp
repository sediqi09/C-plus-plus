#include <iostream>

bool isPositive(int x) {
    return x > 0;
}

int main() {
    std::cout << std::boolalpha;
    std::cout << "isPositive(3): " << isPositive(3) << std::endl;
    std::cout << "isPositive(-5): " << isPositive(-5) << std::endl;
    std::cout << "isPositive(6): " << isPositive(6) << std::endl;
    std::cout << "isPositive(-2): " << isPositive(-2) << std::endl;

    return 0;
}
