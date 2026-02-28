// https://www.codechef.com/problems/BUYTICK

#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        string s;
        cin >> s;

        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0')ans.push_back(v[i]);
        }
        if (ans.size() < k)cout << "-1\n";
        else {
            sort(ans.begin(), ans.end());
            int a = 0;
            for (int i = 0; i < k; i++) {
                a += ans[i];
            }
            cout << a << endl;
        }
    }

    return 0;
}