class Solution {
public:
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
    void solve(vector<string>&b, int n, int&ans, int row) {
        if (row == n) {
            ans++;
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
    int totalNQueens(int n) {
        vector<string> b(n, string(n, '.'));
        int ans = 0;
        solve(b, n, ans, 0);
        return ans;
    }
};