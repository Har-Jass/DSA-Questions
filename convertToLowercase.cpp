#include <bits/stdc++.h>
using namespace std;

// we're playing with ASCII values
string convertUppercase(string str) {
    // iterate on every character of the string
    for(int i = 0; i < str.length(); i++) {
        // in each character we subtract 'A' and add 'a'
        // ASCII of 'A' is 65
        // ASCII of 'a' is 97
        // For example: E - A + a means 69 - 65 + 97 = 101
        // 101 is the ASCII of e
        // means 'E' is converted to 'e'
        str[i] = str[i] - 'A' + 'a';
    }
    return str;
}

int main() {
    string str = "JFDKSHFI";
    cout << "\nOriginal String is: " << str << endl;
    cout << "\nLowercase String is: " << convertUppercase(str) << endl;
}
