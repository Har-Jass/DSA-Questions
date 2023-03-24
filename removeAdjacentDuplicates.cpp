#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string s) {
    // ans string is for return the output
    string ans = "";

    // i & j are the 2 pointers which we place at the start and the end of the original input string
    int i = 0, j = s.length() - 1;

    // jab tak i <= j rhega tb tk ans string ka last character original string se match hoga
    while(i <= j) {
        // ans ki length > 0 hai and ans string ka last character original string ke equal hai means they are adjacent characters
        if(ans.length() > 0 and ans[ans.length() - 1] == s[i]) {
            // ans ke last character ko pop krdenge
            ans.pop_back();
        }
        else {
            // if they are not adjacent characters then we push the current character of original string in ans string
            ans.push_back(s[i]);
        }
        // every time after a computation we increment i
        i++;
    }
    // at the end we return the string
    return ans;
}

int main()
{
    string s = "abbaca";
    cout << "\nFinal string after removing all adjacent duplicates are: " << removeDuplicates(s) << endl;
    return 0;
}
