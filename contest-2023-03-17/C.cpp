#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int main() {_
    string s;
    while (getline(cin, s) && s != "DONE") {
        bool is_palindrome = true;
        int i = 0, j = s.size()-1;
        while (i < j && is_palindrome) {
            if (s[i] == '.' || s[i] == ',' || s[i] == '!' || s[i] == '?' || s[i] == ' ') {
                i++;
            } else if (s[j] == '.' || s[j] == ',' || s[j] == '!' || s[j] == '?' || s[j] == ' ') {
                j--;
            } else if (tolower(s[i]) != tolower(s[j])) {
                is_palindrome = false;
            } else {
                i++;
                j--;
            }
        }
        if (is_palindrome)
            cout << "You won't be eaten!\n";
        else
            cout << "Uh oh..\n";
    }
    return 0;
}