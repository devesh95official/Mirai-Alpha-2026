#include <bits/stdc++.h>

using namespace std;

bool check(int row, int col, vector<string>&b, int n) {
    int r = row, c = col;
    // check for col
    while (r >= 0) {
        if (b[r][c] == 'Q')return false;
        r--;
    }
    // check for upper left corner
    r = row, c = col;
    while (r >= 0 && c >= 0) {
        if (b[r][c] == 'Q')return false;
        r--, c--;
    }
    // check for upper right corner
    r = row, c = col;
    while (r >= 0 && c < n) {
        if (b[r][c] == 'Q')return false;
        r--, c++;
    }
    return true;
}

void solve(vector<string>&b, int n, vector<vector<string>>&ans, int row) {
    if (row == n) {
        ans.push_back(b);
        return;
    }

    for (int col = 0; col < n; col++) {
        if (check(row, col, b, n) == true) {
            b[row][col] = 'Q';   // place queen
            solve(b, n, ans, row + 1);  // explore
            b[row][col] = '.';   // unplace queen
        }
    }
}

int main() {
    int n = 5;
    vector<string> b(n, string(n, '.'));
    vector<vector<string>> ans;
    solve(b, n, ans, 0);

    for (int i = 0; i < ans.size(); i++) {
        //print each ans
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                cout << ans[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}