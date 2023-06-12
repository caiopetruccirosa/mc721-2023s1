#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void append_or_insert(map<string, vector<string>> &m, string key, string s) {
    if (m.find(key) != m.end()) {
        m[key].push_back(s);
    } else {
        m[key] = { s };
    }
    return;
}

int main() {_
    string s;
    map<string, vector<string>> anagrams;
    while (getline(cin, s) && s != "#") {
        string anagram;
        stringstream ss(s);
        while (ss >> anagram) {
            string word = anagram;
            transform(
                anagram.begin(), 
                anagram.end(), 
                anagram.begin(), 
                [](unsigned char c) { 
                    return tolower(c); 
                }
            );
            sort(anagram.begin(), anagram.end());
            append_or_insert(anagrams, anagram, word);
        }
    }

    vector<string> uniques;
    for (pair<string, vector<string>> p: anagrams)
        if (p.second.size() == 1)
            uniques.push_back(p.second[0]);

    sort(uniques.begin(), uniques.end());

    for (string u: uniques)
        cout << u << '\n';

    return 0;
}