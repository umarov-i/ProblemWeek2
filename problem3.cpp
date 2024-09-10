#include <iostream>

int main() {
    double tempc;
    double tempf;

    std::cin >> tempc;

    tempf = tempc * 9 / 5 + 32;

    std::cout << "The temperature in Farenheit is equal to " << tempf << "\n";
    return 0;
}
