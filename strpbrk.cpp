#include <cstring>
#include <iostream>

int main() {
    char str[] = "cluster10";
    const char* result = std::strpbrk(str, "0123456789");

    if (result) {
        std::cout << "First digit found at position: " << (result - str) << std::endl;
    } else {
        std::cout << "No digits found." << std::endl;
    }

    return 0;
}
