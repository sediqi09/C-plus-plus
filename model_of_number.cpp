#include <iostream>

int abs(int x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

int main() {
    std::cout << "abs(5) = " << abs(5) << std::endl;
    std::cout << "abs(-3) = " << abs(-3) << std::endl;
    std::cout << "abs(7) = " << abs(7) << std::endl;
    std::cout << "abs(-100) = " << abs(-100) << std::endl;

    return 0;
}
