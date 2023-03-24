#include <bits/stdc++.h>
using namespace std;

// this function check the substring is palindrome or not
bool checkPalindrome(string str, int i, int j) {
    while(i <= j) {
        if(str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool validPalindrome(string str) {
    // here we use Two Pointer Approach
    int i = 0, j = str.length() - 1;
    while(i <= j) {
        // if str[i] != str[j], means we have to remove either str[i] or str[j] to make string palindrome, but we don't know which one to remove
        if(str[i] != str[j]) {
            // so we remove both of them one by one if one of them return true means its possible to make palindrome by removing one alpahbet
            // if both return false means it's not possible to make palinmdrome
            return checkPalindrome(str, i + 1, j) || checkPalindrome(str, i, j - 1);
        }
        // if str[i] == str[j], means then we simply follow palindrome logic
        else {
            i++;
            j--;
        }
    }
    // if false is not returned means its possible to make palindrome, so we return true
    return true;
}

int main() {
    string str = "abcca";
    bool ans = validPalindrome(str);
    if(ans) {
        cout << "\nPossible" << endl;
    }
    else {
        cout << "\nNot Possible" << endl;
    }
    return 0;
}
