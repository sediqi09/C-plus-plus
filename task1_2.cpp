// Задание 1.2 Методы
#include <iostream>

#include <iostream>

int sumLastNums(int x) {
    int lastDigit = x % 10;
    x = x / 10;
    int secondLastDigit = x % 10;
    return lastDigit + secondLastDigit;
}

int main() {
    std::cout << "sumLastNums (4568): " << sumLastNums(4568) << std::endl;
    std::cout << "sumLastNums (1234): " << sumLastNums(1234) << std::endl;
    std::cout << "sumLastNums (78): " << sumLastNums(78) << std::endl;
    std::cout << "sumLastNums (100): " << sumLastNums(100) << std::endl;

    return 0;
}
