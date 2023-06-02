#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int G[100][100];
bool d[100][100];

void dfs(int end, int n) {
    bool dominator[100];
    bool visited[100];
    bool has_path[100];

    for (int i = 0; i < n; i++) {
        dominator[i] = false;
        visited[i] = false;
        has_path[i] = false;
    }

    int last_vertex = -1;
    int start = 0;

    stack<int> s;
    s.push(start);

    while (!s.empty()) {
        int current = s.top();

        if (!visited[current]) {

        } else {

        }
        visited[current] = true;

        last_vertex = current;
    }

    for (int i = 0; i < n; i++)
        dominator[i] = false;

    return;
}

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                d[i][j] = true;
                cin >> G[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            cout << "+---------+\n";
            for (int j = 0; j < n; j++) {
                cout << '|';
                cout << '|';
            }
        }
        cout << "+---------+\n";
    }

    return 0;
}