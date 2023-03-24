#include <bits/stdc++.h>
using namespace std;

// we're using 2 string functions, i.e., find() and erase()
// Approach: first we find the given part in the original string, then erase that part from the string
string removeOccurrence(string str, string part) {
    // find function return the index of that element from where the substring starts
    // str.find(part) means find "part" in "str"
    int pos = str.find(part);
    // npos --> no position
    // jb tk string me position milti rhegi tb tk while loop chlta rhega
    while(pos != string::npos) {
        // and original string me se erase ptr krdenge
        // position se leke substring ki length tk ka part delete ho jayega
        str.erase(pos, part.length());
        // again we find the part in the string
        pos = str.find(part);
    }
    // at the end we return the string when no occurrences is left
    return str;
}

int main() {
    string str = "fjkshkjfuddubdsghffuddudsjfjskhfuddu";
    string part = "fuddu";
    cout << "\nOriginal String is: " << str << endl;
    cout << "\nString after removing all occurrences of " << part << " is: " << removeOccurrence(str, part) << endl;
}
