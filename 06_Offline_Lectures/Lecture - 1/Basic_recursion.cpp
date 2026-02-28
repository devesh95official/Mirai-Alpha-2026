#include <bits/stdc++.h>

using namespace std;

void rahim(int cnt) {
    cout << cnt << endl; // processing
    if (cnt == 10)return;  // base case
    rahim(++cnt); // function calling again
}

int main() {

    rahim(1);

    return 0;
}