#include <bits/stdc++.h>

using namespace std;

// print n numbers
void print(int n) {
    if (n == 0)return;

    cout << n << endl;  // processing
    
    print(n - 1); // function calling


}

int main() {
    int n;
    cin >> n;

    print(n);

    return 0;
}