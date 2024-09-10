#include <iostream>

int main() {
    double mh;
    double ms;

    std::cin >> ms >> mh;

    if (ms > mh * 30.48) {
        std::cout << 0 << "\n";
    }
    else {
        std::cout << 1 << "\n";
        return 0;
    }
}