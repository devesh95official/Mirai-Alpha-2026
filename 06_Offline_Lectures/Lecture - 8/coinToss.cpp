#include <bits/stdc++.h>

using namespace std;

void solve(int n, string ans) {
    if (ans.size() == n) {
        cout << ans << endl;
        return;
    }

    solve(n, ans + "H");  // choose
    // backtrack
    solve(n, ans + "T"); // choose other
}

int main() {

    int n = 3;

    solve(n, "");

    return 0;
}