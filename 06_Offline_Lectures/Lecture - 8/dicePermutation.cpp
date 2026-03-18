// a dice exists {1,2,3,4,5,6}
// print all possible permutations in n tries

#include <bits/stdc++.h>

using namespace std;

void solve(int n, string s) {
    // if (s.size() == n) {
    //     cout << s << endl;
    //     return;
    // }
    //sol1
    // vector<string> v = {"1", "2", "3", "4", "5", "6"};
    // for (auto x : v) {
    //     solve(n, s + x);
    // }
    //sol2
    // for (int i = 1; i <= 6; i++) {
    //     solve(n, s + to_string(i));
    // }
    //sol3
    // solve(n, s + "1");
    // solve(n, s + "2");
    // solve(n, s + "3");
    // solve(n, s + "4");
    // solve(n, s + "5");
    // solve(n, s + "6");


    if (n == 0) {
        cout << s << endl;
        return;
    }
    //sol1
    // vector<string> v = {"1", "2", "3", "4", "5", "6"};
    // for (auto x : v) {
    //     solve(n-1, s + x);
    // }
    //sol2
    for (int i = 1; i <= 6; i++) {
        solve(n-1, s + to_string(i));
    }
    //sol3
    // solve(n - 1, s + "1");
    // solve(n - 1, s + "2");
    // solve(n - 1, s + "3");
    // solve(n - 1, s + "4");
    // solve(n - 1, s + "5");
    // solve(n - 1, s + "6");
}

int main() {

    int n  = 2;
    solve(n, "");

    return 0;
}