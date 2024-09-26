#include <iostream>

double fraction(double x) {
    return x - static_cast<int>(x);
}

int main() {
    std::cout << "Test (5.25): " << fraction(5.25) << std::endl;
    std::cout << "Test (8.0): " << fraction(8.0) << std::endl;
    std::cout << "Test (0.97): " << fraction(0.97) << std::endl;
    std::cout << "Test (-0.3): " << fraction(-0.3) << std::endl;

    return 0;
}
