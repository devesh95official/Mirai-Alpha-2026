//https://www.codechef.com/problems/QNOT

#include <bits/stdc++.h>

using namespace std;

// stratagy
// use lamda functions
// different scopes
// to divide questions into smaller solvable questions

int main() {

    int n, x, y;
    cin >> n >> x >> y;

    string ans = "NO";
    // we will find ans in this scope
    {
        if (n >= x * 2 && n >= 2 * y) {
            ans = "YES";
        }
    }

    cout << ans << endl;

    return 0;
}