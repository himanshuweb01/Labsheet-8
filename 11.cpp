#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    float price;

    void input() {
        cout << "Enter car brand: ";
        cin >> brand;
        cout << "Enter car price: ";
        cin >> price;
    }

    void display() {
        cout << "Brand: " << brand << ", Price: " << price << endl;
    }
};

int main() {
    Car c1, c2;

    cout << "Enter details for Car 1:\n";
    c1.input();

    cout << "\nEnter details for Car 2:\n";
    c2.input();

    cout << "\n--- Car Information ---\n";
    c1.display();
    c2.display();

    return 0;
}
