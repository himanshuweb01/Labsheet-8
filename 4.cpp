#include <iostream>
using namespace std;

void copyString(char s1[], char s2[]) {
    int i = 0;
    // Copy characters until null terminator
    while (s1[i] != '\0') {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0'; // Add null terminator to destination string
}

int main() {
    char str1[100], str2[100];

    cout << "Enter a string: ";
    cin.getline(str1, 100);

    copyString(str1, str2);

    cout << "Copied String: " << str2;

    return 0;
}
