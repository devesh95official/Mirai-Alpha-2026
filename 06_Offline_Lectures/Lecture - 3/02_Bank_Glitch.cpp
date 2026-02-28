// https://www.codechef.com/problems/BANKGLITCH

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;
    while (t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        cout << b + (a % x) + ((a / x) * y) << endl;
    }

    return 0;
}