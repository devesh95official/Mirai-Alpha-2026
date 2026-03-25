#include <bits/stdc++.h>

using namespace std;
// not valid parenthesis
void solve(int open, int close, int n, string ans) {
    if (ans.size() == 2 * n) {
        cout << ans << endl;
        return;
    }

    if (open < n)solve(open + 1, close, n, ans + "(");
    if (close < n)solve(open, close + 1, n, ans + ")");
}

int main() {

    int n;
    cin >> n;

    solve(0, 0, n, "");

    return 0;
}