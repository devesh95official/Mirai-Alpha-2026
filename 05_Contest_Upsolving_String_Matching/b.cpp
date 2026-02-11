// https://www.codechef.com/problems/ALLEV

#include <bits/stdc++.h>

using namespace std;



int main() {
    // input
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // // method 1
        // {
        //     int sum = 0;
        //     for (int i = 0; i < n; i++) {
        //         sum += v[i];
        //     }
        //     if (sum % 2 == 0)cout << "YES\n";
        //     else cout << "NO\n";
        // }
        // method 2
        {
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                cnt += (v[i] % 2 != 0);
            }
            if (cnt % 2 == 0)cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}