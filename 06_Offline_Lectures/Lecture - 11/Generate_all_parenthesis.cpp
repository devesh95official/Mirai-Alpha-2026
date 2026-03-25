// all parenthesis

#include <bits/stdc++.h>

using namespace std;

void solve(int open, int close, int n, string ans) {
    if (ans.size() == 2 * n) {
        cout << ans << endl;
        return;
    }

    solve(open + 1, close, n, ans + "(");
    solve(open, close + 1, n, ans + ")");
}

int main() {

    int n;
    cin >> n;

    solve(0, 0, n, "");

    return 0;
}