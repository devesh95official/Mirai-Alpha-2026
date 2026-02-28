#include <bits/stdc++.h>

using namespace std;

// print n numbers
void print(int n) {
    if (n == 0)return;

    print(n - 1);

    cout << n << endl;

}

int main() {
    int n;
    cin >> n;

    print(n);

    return 0;
}