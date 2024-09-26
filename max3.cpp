#include <iostream>

int max3 (int x, int y, int z) {
    if (x > y) {
        return x;
    }
    else if (y > z) {
        return y;
    }
    else {
        return z;
    }
}

int main() {
    std::cout << "max3 (5, 7, 7): " << max3(5, 7, 7) << std::endl;
    std::cout << "max3 (8, -1, 4): " << max3(8, -1, 4) << std::endl;
    std::cout << "max3 (1, 2, 3): " << max3(1, 2, 3) << std::endl;
    std::cout << "max3 (-5, -3, -1): " << max3(-5, -3, -1) << std::endl;

    return 0;
}