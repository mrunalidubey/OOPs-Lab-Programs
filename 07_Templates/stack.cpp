
#include <iostream>
#include <string>
using namespace std;

// Generic Stack using Template
template <class T>
class Stack {
private:
    T arr[5];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(T value) {
        if (top == 4) {
            cout << "Stack Overflow\n";
        } else {
            arr[++top] = value;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
        } else {
            cout << "Popped: " << arr[top--] << endl;
        }
    }

    void display() {
        cout << "Stack: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // Integer Stack
    Stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.display();
    s1.pop();

    // Float Stack
    Stack<float> s2;
    s2.push(10.5);
    s2.push(20.5);
    s2.display();

    // String Stack
    Stack<string> s3;
    s3.push("Hello");
    s3.push("World");
    s3.display();

    return 0;
}
