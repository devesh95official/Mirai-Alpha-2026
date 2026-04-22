#include <bits/stdc++.h>
using namespace std;

vector<bool> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    if (n >= 0) isPrime[0] = false;
    if (n >= 1) isPrime[1] = false;

    for (long long i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (long long j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

int main() {
    int n = 200000;
    auto prime = sieve(n);

    for (int i = 0; i <= n; i++) {
      //  if (prime[i]) cout << i << " ";
    }
    return 0;
}
