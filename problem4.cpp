#include <iostream>

int main() {
    int students;

    std::cin >> students;

    int FreeSeats = students % 50;
    if (FreeSeats > 0) {
        FreeSeats = 50 - FreeSeats;
    }

    std::cout << FreeSeats << "\n";
    return 0;
}
