// easy https://www.codechef.com/problems/PSAS

#include <bits/stdc++.h>

using namespace std;



int main() {

    //input
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            v[i] = abs(v[i]);
        }

        bool ans = true;
        // check for no cases, if any found then mark ans = false;
        {
            for (int i = 1; i < n; i++) {
                if (v[i] != v[i - 1])ans = false;
            }
        }

        //print yes no
        if (ans)cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}