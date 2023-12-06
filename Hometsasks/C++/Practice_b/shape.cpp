#include <iostream>

class Shape {
public:
    virtual double calculateArea() = 0; // Pure virtual function
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() override {
        return 3.14 * radius * radius;
    }
};

int main() {
    Rectangle rectangle(5, 3);
    Circle circle(4);

    std::cout << "Rectangle area: " << rectangle.calculateArea() << std::endl;
    std::cout << "Circle area: " << circle.calculateArea() << std::endl;

    return 0;
}
