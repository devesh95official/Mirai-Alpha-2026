#include <bits/stdc++.h>

using namespace std;

// Recursive function to find nth Fibonacci number
int nth_Fib(int n){

    // base case
    if (n <= 1){
        return n;
    }

    // sum of the two preceding 
    // Fibonacci numbers
    return nth_Fib(n - 1) + nth_Fib(n - 2);
}

int main() {
    int n;
    cin >> n;

    cout << nth_Fib(n);

    return 0;
}