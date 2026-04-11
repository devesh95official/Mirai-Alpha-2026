#include <bits/stdc++.h>

using namespace std;

// minimum number of coins to make exactly x
int minCoins(int x, vector<int>&coins, int coinsTillNow) {
    // base case
    if (x == 0)return coinsTillNow;
    int tempAns = INT_MAX;
    for (auto coin : coins) {
        if (x - coin >= 0) {
            tempAns = min(tempAns, minCoins(x - coin, coins, coinsTillNow + 1));
        }
    }
    return tempAns;
}

int main() {

    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    int ans = minCoins(x, coins, 0);
    // if ans not exists them print -1 else print ans
    if (ans == INT_MAX)cout << "-1\n";
    else cout << ans << endl;
    return 0;
}