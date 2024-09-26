#include <iostream>

bool is2Digits(int x) {
    return (x >= 10 && x <= 99) || (x <= -10 && x >= -99);
}

int main() {
    std::cout << std::boolalpha;
    std::cout << "is2Digits(32): " << is2Digits(32) << std::endl;
    std::cout << "is2Digits(516): " << is2Digits(516) << std::endl;
    std::cout << "is2Digits(-45): " << is2Digits(-45) << std::endl;
    std::cout << "is2Digits(9): " << is2Digits(9) << std::endl;

    return 0;
}
