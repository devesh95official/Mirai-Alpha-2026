// inheritance

#include <bits/stdc++.h>

using namespace std;

class Parent {
public:
    void sayHello() {
        cout << "Hello Beta!!\n";
    }
    int sum(int a, int b) {
        return a + b;
    }
    void saySomething() {
        cout << "I am Hungry!!\n";
    }
};

class Child : public Parent {
public:
    void sayHello() {
        cout << "Hello Uncle!!\n";
    }
    int sum(int a, int b, int c) {
        return (a * b - c);
    }
};

int main() {

    Parent s1;
    cout << s1.sum(3, 4) << endl;

    Child c1;
    c1.sayHello();
    cout << c1.sum(2, 2, 4) << endl;
    c1.saySomething();

    return 0;
}