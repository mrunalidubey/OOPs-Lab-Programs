
#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // Function Overloading
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    void display(string message) {
        cout << message;
        display();
    }

    // Operator Overloading
    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1(10, 5);
    Complex c2(5, 3);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    // Function Overloading
    c1.display("Using overloaded function: ");

    // Operator Overloading
    Complex c3 = c1 + c2;

    cout << "Addition: ";
    c3.display();

    return 0;
}
