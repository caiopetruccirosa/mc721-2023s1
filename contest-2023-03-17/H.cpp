#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int w[101], l[101];

int compute_game(string m1, string m2) {
    if (m1 == m2) {
        return 0;
    } else if (m1 == "rock" && m2 == "scissors") {
        return -1;
    } else if (m1 == "paper" && m2 == "rock") {
        return -1;
    } else if (m1 == "scissors" && m2 == "paper") {
        return -1;
    } else {
        return 1;
    }
}

int main() {_
    bool first = true;
    int n, k;
    while (cin >> n && n != 0) {
        cin >> k;

        for (int i = 1; i <= n; i++)
            w[i] = l[i] = 0;
            
        int number_games = k*n*(n-1)/2;
        for (int i = 1; i <= number_games; i++) {
            int p1, p2;
            string m1, m2;

            cin >> p1 >> m1 >> p2 >> m2;
            
            int g = compute_game(m1, m2);
            if (g < 0) {
                w[p1]++;
                l[p2]++;
            } else if (g > 0) {
                l[p1]++;
                w[p2]++;
            }
        }

        if (!first) {
            printf("\n");
        } else {
            first = false;
        }

        for (int i = 1; i <= n; i++) {
            if (w[i]+l[i] != 0) {
                printf("%.3lf\n", (1.0*w[i])/(w[i]+l[i]));
            } else {
                printf("-\n");
            }
        }
    }
    return 0;
}