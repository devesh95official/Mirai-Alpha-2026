// https://www.codechef.com/problems/MXSCWN

#include <bits/stdc++.h>

using namespace std;



int main() {
    //input
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        //store sum
        int sum = 0;
        {
            for (int i = 0; i < n; i++) {
                sum += a[i];
            }
        }
        // calc maximum ans
        int ans = 0;
        {
            for (int i = 0; i < n; i++) {
                // harte agar ham to ans = sum - a[i] + b[i]
                ans = max(ans, sum - a[i] + b[i]);
            }
        }
        //print ans
        cout << ans << endl;
    }

    return 0;
}