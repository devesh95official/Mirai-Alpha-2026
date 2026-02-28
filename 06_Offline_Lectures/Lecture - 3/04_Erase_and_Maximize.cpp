// https://www.codechef.com/problems/DICEERMAX

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;

        if (s >= 5 * n)cout << 6 * n - (s - 5 * n) << endl;
        else cout << 6 * n << endl;
    }

    return 0;
}