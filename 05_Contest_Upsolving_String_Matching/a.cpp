// https://www.codechef.com/problems/PAYSC

#include <bits/stdc++.h>

using namespace std;



int main() {

    int x;
    cin >> x;

    int mini = 300; // second case -> 300 instantly
    // if 4*x + 100 less then we will store this in mini
    {
        if (4 * x + 100 < mini) {
            mini = 4 * x + 100;
        }
    }

    // print ans
    cout << mini << endl;

    return 0;
}