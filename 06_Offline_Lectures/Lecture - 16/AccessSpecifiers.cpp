#include <bits/stdc++.h>

using namespace std;

class alpha {
   // public:

   //private:
protected:
   void show() {
      cout << "DSA WEB DS APTITUDE AKTU\n";
   }
};

class newAplha : public alpha {
   // no code
public:
   void show1() {
      show();
   }
};

int main() {

   alpha*a = new alpha;
   newAplha * b = new newAplha;
   b -> show1();
   return 0;
}