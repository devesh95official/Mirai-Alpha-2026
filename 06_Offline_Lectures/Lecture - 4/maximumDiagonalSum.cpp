#include <bits/stdc++.h>

using namespace std;

// maximum diagonal Sum

int main() {

    vector<vector<int>> v = {
        {11, 12, 13, 14},
        {15, 16, 17, 18},
        {19, 20, 21, 22}
    };
    int m = v.size();
    int n = v[0].size();
    int sum = 0;
    int ans = 0;
    for (int i = m - 1; i >= 0; i--) {
        int i1 = i, j = 0;
        while (i1 < m && j < n) {
            // cout << v[i1][j] << " ";
            sum += v[i1][j];
            ans = max(ans, sum);
            i1++, j++;
        }
        sum = 0;
    }

    for (int j = 1; j < n; j++) {
        int i = 0, j1 = j;
        while (i < m && j1 < n) {
            // cout << v[i][j1] << " ";
            sum += v[i][j1];
            ans = max(ans, sum);
            i++, j1++;
        }
        sum = 0;
    }

    cout << ans << endl;

    return 0;
}