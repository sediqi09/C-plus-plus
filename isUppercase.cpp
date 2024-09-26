#include <iostream>

bool isUpperCase(char x) {
    return (x >= 'A' && x <= 'Z');
}

int main() {
    std::cout << std::boolalpha;
    std::cout << "isUpperCase('A'): " << isUpperCase('A') << std::endl;
    std::cout << "isUpperCase('b'): " << isUpperCase('b') << std::endl;
    std::cout << "isUpperCase('h'): " << isUpperCase('h') << std::endl;
    std::cout << "isUpperCase('R'): " << isUpperCase('R') << std::endl;

    return 0;
}
