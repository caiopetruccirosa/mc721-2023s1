#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

//int calculate_idx(int i, int j, int rows) {
//    return i*rows + j;
//}

//bool has_path(vector<vector<int>> &G, vector<bool> &visited, int current, int target) {
//    if (current == target)
//        return true;
//
//    if (visited[current])
//        return false;
//
//    visited[current] = true;
//
//    for (int adj: G[current])
//        if (has_path(G, visited, adj, target))
//            return true;
//    
//    return false;
//}

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string grid[2];
        cin >> grid[0] >> grid[1];
        
        //int rows = 2, cols = n;
        //vector<vector<int>> G(rows*cols, vector<int>());
        //for (int i = 0; i < rows; i++) {
        //    for (int j = 0; j < cols; j++) {
        //        if (grid[i][j] ==  '0') {
        //            int idx = calculate_idx(i, j, rows);
        //            for (int a = -1; a <= 1; a++) {
        //                for (int b = -1; b <= 1; b++) {
        //                    if ((a != 0 || b != 0) && i+a >= 0 && i+a < rows && j+b >= 0 && j+b < cols && grid[i+a][j+b] == '0') {
        //                        cout << "A célula (" << i << ',' << j << ") está ligada à célula (" << i+a << ',' << j+b << ")\n";
        //                        int idxc = calculate_idx(i+a, j+b, rows);
        //                        G[idx].push_back(idxc);
        //                    }
        //                }
        //            }
        //        }
        //    }
        //}

        //vector<bool> visited(rows*cols, false);
        //if (has_path(G, visited, calculate_idx(0, 0, rows), calculate_idx(rows-1, cols-1, rows)))

        bool has_path = true;
        for (int i = 0; i < n; i++) {
            if (grid[0][i] == '1' && grid[1][i] == '1') {
                has_path = false;
                break;
            }
        }

        if (has_path)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}