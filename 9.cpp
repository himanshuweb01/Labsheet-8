#include <iostream>
using namespace std;

void swapRef(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    swapRef(a, b);

    cout << "After swapping: " << a << " " << b;
}
