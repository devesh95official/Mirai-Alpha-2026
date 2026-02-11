// hard solution for Q4
// easy https://www.codechef.com/problems/PSAS

#include <bits/stdc++.h>

using namespace std;

void solve() {
    auto Check = [&](vector<int> & v)->bool{
        for (int i = 0; i < v.size(); i++) {
            if (v[i] != v[0])return false;
        }
        return true;
    };
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // if equal pehle se
    {
        if (Check(v)) {
            cout << "YES\n";
            return;
        }
    }
    // solve for remaining part
    {
        for (int i = 0; i < n; i++) {
            vector<int> part(n);
            for (int j = 0; j < n; j++) {
                if (j < i)part[j] = v[j] + v[i];
                else part[j] = v[j] - v[i];
            }
            if (Check(part)) {
                cout << "YES\n";
                return;
            }
        }
        cout << "NO\n";
    }
}

int main() {

    //input
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}