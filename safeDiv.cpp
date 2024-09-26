#include <iostream>

double safeDiv(int x, int y) {
    if (y == 0) {
        return 0.0;
    }
    return static_cast<double>(x) / y;
}

int main() {
    std::cout << "safeDiv(5, 0) = " << safeDiv(5, 0) << std::endl;
    std::cout << "safeDiv(8, 2) = " << safeDiv(8, 2) << std::endl;
    std::cout << "safeDiv(10, -2) = " << safeDiv(10, -2) << std::endl;
    std::cout << "safeDiv(9, 5) = " << safeDiv(9, 5) << std::endl;

    return 0;
}
