#include <iostream>
#include <string>

std::string makeDecision(int x, int y) {
    if (x > y) {
        return std::to_string(x) + " > " + std::to_string (y);
    }
    else if ( x < y ) {
        return std::to_string (x) + " < " + std::to_string(y);
    }
    else  {
        return std::to_string(x) + " == " + std::to_string(y);
    }
}

int main() {

    std::cout << "makeDecision (3,5): " << makeDecision (3, 5) << std::endl;
    std::cout << "makeDecision (9,8): " << makeDecision (9, 8) << std::endl;
    std::cout << "makeDecision (4,4): " << makeDecision (4,4) << std::endl;
    std::cout << "makeDecision (-4,-5): " << makeDecision(-4, -5) << std::endl;

    return 0;
}