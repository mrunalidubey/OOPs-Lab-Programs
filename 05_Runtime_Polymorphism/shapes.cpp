
#include <iostream>
using namespace std;

// Abstract Base Class
class Shape {
public:
    virtual double area() = 0;

    virtual ~Shape() {}
};

// Circle class
class Circle : public Shape {
public:
    double radius;

    Circle(double r) {
        radius = r;
    }

    double area() override {
        return 3.14 * radius * radius;
    }
};

// Rectangle class
class Rectangle : public Shape {
public:
    double length, width;

    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double area() override {
        return length * width;
    }
};

// Triangle class
class Triangle : public Shape {
public:
    double base, height;

    Triangle(double b, double h) {
        base = b;
        height = h;
    }

    double area() override {
        return 0.5 * base * height;
    }
};

int main() {
    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(4, 5);

    Shape* s;

    s = &c;
    cout << "Circle Area: " << s->area() << endl;

    s = &r;
    cout << "Rectangle Area: " << s->area() << endl;

    s = &t;
    cout << "Triangle Area: " << s->area() << endl;

    return 0;
}
