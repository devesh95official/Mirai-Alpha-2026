// polymorphism

#include <bits/stdc++.h>

using namespace std;

class Sum {
public:
    int sum(int a, int b) {
        return a + b;
    }
    int sum(int a, int b, int c) {
        return a + b + c;
    }
    double sum(double a, double b) {
        return a + b;
    }
};

int main() {

    Sum s1;
    cout << s1.sum(3, 4) << endl;
    cout << s1.sum(3, 4, 5) << endl;

    return 0;
}