#include <bits/stdc++.h>

using namespace std;

void toh(char source, char helper, char destination, int n) {
   if (n == 1) {
      cout << source << " -> " << destination << endl;
      return;
   }

   // step 1
   toh(source, destination, helper, n - 1);
   // step 2
   toh(source, helper, destination, 1);
   //step 3
   toh(helper, source, destination, n - 1);
}

int main() {

   int n;
   cin >> n;
   char s = 'S', h = 'H', d = 'D';
   toh(s, h, d, n);

   return 0;
}