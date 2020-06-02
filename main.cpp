#include <iostream>
#include "NComplex.h"

int main() {

    NComplex a,b;

    std::cin >> a;
    std::cin >> b;

    std::cout <<    "Addition of "         << a << " and " << b << " is: " << a + b << '\n';
    std::cout <<    "Subtraction of "      << a << " and " << b << " is: " << a - b << '\n';
    std::cout <<    "Multiplication of "   << a << " and " << b << " is: " << a * b << '\n';
    std::cout <<    "Division of "         << a << " and " << b << " is: " << a / b << '\n';

    NComplex c = a;
    c += b;

    std::cout << "Addition of " << a << " + " << b << " using += operation: " << c << '\n';

    std::cout << a << " == " << b << "? " << (a == b ? "Si" : "No") << '\n';
    std::cout << a << " != " << b << "? " << (a != b ? "Si" : "No") << '\n';

    return 0;
}
