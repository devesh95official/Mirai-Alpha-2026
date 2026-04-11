#include <bits/stdc++.h>

using namespace std;

void queenComb(int idx, int n, int q, string ans) {
    if (idx == n) {
        if (q == 0)cout << ans << endl;
        return;
    }

    // place
    queenComb(idx + 1, n, q - 1, ans + "Q");
    // unplace
    queenComb(idx + 1, n, q, ans + "-");
}

int main() {

    int n, q;
    cin >> n >> q;

    queenComb(0, n, q, "");

    return 0;
}