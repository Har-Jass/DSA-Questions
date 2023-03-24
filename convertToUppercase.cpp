#include <bits/stdc++.h>
using namespace std;

// we're playing with ASCII values
string convertUppercase(string str) {
    // iterate on every character of the string
    for(int i = 0; i < str.length(); i++) {
        // in each character we subtract 'a' and add 'A'
        // ASCII of 'a' is 97
        // ASCII of 'A' is 65
        // For example: e - a + A means 101 - 97 + 65 = 69
        // 69 is the ASCII of E
        // means 'e' is converted to 'E'
        str[i] = str[i] - 'a' + 'A';
    }
    return str;
}

int main() {
    string str = "fdhsfds";
    cout << "\nOriginal String is: " << str << endl;
    cout << "\nUppercase String is: " << convertUppercase(str) << endl;
}
