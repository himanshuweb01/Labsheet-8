#include <iostream>
using namespace std;

int countWords(string s) {
    int words = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\0')
            words++;
    return words + 1;
}

int main() {
    string str;
    cout << "Enter sentence: ";
    getline(cin, str);

    cout << "Word Count = " << countWords(str);
}
