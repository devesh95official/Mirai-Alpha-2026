#include <bits/stdc++.h>

using namespace std;

// blueprint
// class
class Human {
public:
    string Name;
    int Age = 19;
    string Hobby;

    void SayName() {
        cout << "SIR, My name is : " << Name << endl;
    }
    void SayIntro() {
        cout << "SIR, My name is : " << Name << endl;
        cout << "SIR, My age is : " << Age << endl;
        cout << "SIR, My Hobbies are : " << Hobby << endl;
    }
    void Sum(int a, int b) {
        cout << a + b << endl;
    }
};

int main() {
    // create Instance of a Human class
    Human Panday;
    Panday.Name = "Ayush Panday";
    Panday.SayName();
    Panday.Sum(9, 8);
    Panday.SayIntro();

    Panday.Age = 100;
    Panday.SayIntro();

    return 0;
}