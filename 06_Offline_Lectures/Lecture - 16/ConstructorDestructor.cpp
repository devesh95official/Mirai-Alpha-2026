#include <bits/stdc++.h>

using namespace std;

class c
{
public:
    c();// constructor
    ~c();// destructor

};

class a {
private:
    int b = 0;
public:
    a(int param) {
        b = param;
        cout << "constructor\n";
    }
    void show() {
        cout << b << endl;
    }
};

class b {
private:
    int a = 8;
public:
    void print() {
        cout << "Bewkoof banaya bada maja aya!\n";
    }
    void show(int a) {
        this -> print();
        cout << this->a << endl;
        cout << a << endl;
    }
};

class A {
public:
    int x = 7;
    void set(int x) {
        this->x = x;
    }
};

int main() {

    a*obj1 = new a(10);
    obj1 -> show();
    obj1 -> show();
    cout << endl;
    b*obj2 = new b;
    obj2 -> show(7);

    A* obj3 = new A;
    obj3 -> set(10);
    cout << obj3->x;
    return 0;
}