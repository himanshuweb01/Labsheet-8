#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0; // Pure virtual function
};

class Circle : public Shape {
private:
    float radius;

public:
    void input() {
        cout << "Enter radius: ";
        cin >> radius;
    }

    void area() {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
private:
    float length, width;

public:
    void input() {
        cout << "Enter length and width: ";
        cin >> length >> width;
    }

    void area() {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;

    cout << "--- Circle ---\n";
    c.input();
    c.area();

    cout << "\n--- Rectangle ---\n";
    r.input();
    r.area();

    return 0;
}
