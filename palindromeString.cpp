#include <bits/stdc++.h>
using namespace std;

// this approach is called Two Pointer Approach
bool checkPalindrome(string s) {
    // i will be at starting of the string & j will be at ending of the string
    int i = 0, j = s.length() - 1;
    // jab tak i <= j rhega tb tk loop chalta rhega
    while(i <= j) {
        // agr original string ka first character == last character then just simply increment i and decrement j
        if(s[i] == s[j]) {
            i++;
            j--;
        }
        // agr characters match nahi krte to means string palindrome nahi hai and return false
        else {
            return false;
        }
    }
    // agr false return nahi hua and program is point tk pahucg gya means string is palindrome so we simply return true
    return true;
}

int main() {
    string s = "naman";
    if(checkPalindrome(s) == true) {
        cout << "\nString is palindrome" << endl;
    }
    else {
        cout << "\nString is not palindrome" << endl;
    }
    return 0;
}
