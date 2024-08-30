#include <iostream>

class Circle {
private:
    double radius;

public:
    // Default constructor
    Circle() : radius(0.0) {}

    // Setter function
    void setRadius(double r) {
        radius = r;
    }

    // Getter function
    double getRadius() const {
        return radius;
    }

    // Overload the + operator
    Circle operator+(const Circle& other) const {
        Circle temp;
        temp.radius = this->radius + other.radius;
        return temp;
    }
};

int main() {
    // Create three Circle objects
    Circle c1, c2, c3;

    // Set the radius of c1 and c2
    c1.setRadius(5.0);
    c2.setRadius(7.0);

    // Combine the radii of c1 and c2 into c3
    c3 = c1 + c2;

    // Display the radius of c3
    std::cout << "Radius of third circle is " << c3.getRadius() << std::endl;

    return 0;
}
