// coin change number of ways

#include <bits/stdc++.h>

using namespace std;

int numberOfWays(vector<int> &coins, int x) {
    if (x == 0)return 1;
    int ans = 0;
    for (auto coin : coins) {
        if (x - coin >= 0) {
            ans += numberOfWays(coins, x - coin);
        }
    }
    return ans;
}

int main() {

    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    cout << numberOfWays(coins, x) << endl;
    return 0;
}