#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    // Default constructor
    Complex() : real(0.0), imaginary(0.0) {}

    // Overload stream extraction operator >>
    friend std::istream& operator>>(std::istream& in, Complex& c) {
        std::cout << "Plz enter real part of complex num: ";
        in >> c.real;
        std::cout << "Plz enter imaginary part of complex num: ";
        in >> c.imaginary;
        return in;
    }

    // Overload stream insertion operator <<
    friend std::ostream& operator<<(std::ostream& out, const Complex& c) {
        out << c.real << " + " << c.imaginary << "i";
        return out;
    }
};

int main() {
    Complex com1;

    // Take input for com1
    std::cin >> com1;

    // Print the complex number
    std::cout << "The complex object is " << com1 << std::endl;

    return 0;
}
