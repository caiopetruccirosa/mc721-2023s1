#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>

using namespace std;

void remove_prerequisites(map<string, vector<string>> &prerequisites, set<string> &minimum_prerequisites, string course) {
    if (prerequisites.find(course) == prerequisites.end())
        return;
    
    for (string pr: prerequisites[course]) {
        if (minimum_prerequisites.find(pr) != minimum_prerequisites.end()) {
            minimum_prerequisites.erase(pr);
        }
        remove_prerequisites(prerequisites, minimum_prerequisites, pr);
    }

    return;
}

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;
        vector<string> courses(k);
        for (int i = 0; i < k; i++)
            cin >> courses[i];
        sort(courses.begin(), courses.end());

        int j;
        cin >> j;
        map<string, vector<string>> prerequisites;
        for (int i = 0; i < j; i++) {
            string c;
            int p;
            cin >> c >> p;
            prerequisites[c] = vector<string>(p);
            for (int i = 0; i < p; i++) {
                string cp;
                cin >> cp;
                prerequisites[c][i] = cp;
            }
        }

        for (string c: courses) {
            set<string> minimum_prerequesites;
            for (string cp: prerequisites[c]) {
                minimum_prerequesites.insert(cp);
            }
            for (string cp: prerequisites[c]) {
                remove_prerequisites(prerequisites, minimum_prerequesites, cp);
            }
            if (minimum_prerequesites.size() > 0) {
                cout << c << ' ' << minimum_prerequesites.size();
                for (string cp: minimum_prerequesites) {
                    cout << ' ' << cp;
                }
                cout << '\n';
            }
        }
    }

    return 0;
}