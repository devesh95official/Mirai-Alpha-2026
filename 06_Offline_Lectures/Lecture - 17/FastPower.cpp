#include <bits/stdc++.h>

using namespace std;

long long fastPower(long long a, long long b) {
    long long ans = 1;
    while (b > 0) {
        if (b & 1) ans = ans * a;
        a = a * a;
        b >>= 1;
    }
    return ans;
}

int main(){
    
    return 0;
}