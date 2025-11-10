#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    float marks;

public:
    void inputStudent() {
        inputPerson();
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayStudent() {
        displayPerson();
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    cout << "--- Enter Student Details ---\n";
    s.inputStudent();

    cout << "\n--- Student Information ---\n";
    s.displayStudent();

    return 0;
}
