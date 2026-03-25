#include <bits/stdc++.h>

using namespace std;


int solve(int row, int col, vector<vector<int>>&vis) {
    if (row == 0 || col == 0) {
        vis[row][col] = 1;
        return 1;
    }
    int ans = 0;
    if (vis[row - 1][col] != -1)ans += vis[row - 1][col];
    else {
        int temp = solve(row - 1, col, vis);
        vis[row - 1][col] = temp;
        ans += temp;
    }
    if (vis[row][col - 1] != -1)ans += vis[row][col - 1];
    else {
        int temp = solve(row, col - 1, vis);
        vis[row][col - 1] = temp;
        ans += temp;
    }
    return ans;
}

int main() {

    int n, m;
    cin >> n >> m;

    vector<vector<int>> vis(n, vector<int>(m, -1));
    cout << solve(n - 1, m - 1, vis);

    return 0;
}