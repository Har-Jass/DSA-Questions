#include <bits/stdc++.h>
using namespace std;

// this approach is called Two Pointer Approach
string reverseString(string s) {
    // i original string k starting me rhega
    // j original string k ending me rhega
    int i = 0, j = s.length() - 1;
    // jab tk i <= j rhega tb tk loop chlta rhega
    while(i <= j) {
        // every iteration me hum i and j ke character ko swap krte rhege
        swap(s[i], s[j]);
        // after swapping i increment hoga and j decrement hoga
        i++;
        j--;
    }
    // at the end swapped string ko reverse krdenge
    return s;
}

int main() {
    string s = "hjkhgjks";
    cout << "\nOriginal String is: " << s << endl;
    cout << "\nReverse String is: " << reverseString(s) << endl;
}
