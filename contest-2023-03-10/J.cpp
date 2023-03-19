#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int increasing_sum(vector<vector<int>> &matrix, int n, int m) {
    for (int i = n-2; i > 0; i--) {
        for (int j = m-2; j > 0; j--) {
            if (matrix[i][j] == 0) {
                int tmp = min(matrix[i+1][j], matrix[i][j+1]) - 1;
                if (tmp > matrix[i-1][j] && tmp > matrix[i][j-1]) {
                    matrix[i][j] = tmp;
                } else {
                    return -1;
                }
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i < n-1 && matrix[i][j] >= matrix[i+1][j])
                return -1;
            if (j < m-1 && matrix[i][j] >= matrix[i][j+1])
                return -1;
                
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main() {_
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix = vector<vector<int>>(n, vector<int>(m, -1));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << increasing_sum(matrix, n, m) << '\n';

    return 0;
}