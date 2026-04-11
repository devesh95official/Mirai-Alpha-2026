#include <bits/stdc++.h>

using namespace std;


void placeQueen(vector<char>& v , int idx, int q) {
   if (q == 0) {
      for (int i = 0; i < v.size(); i++) {
         cout << v[i] << " ";
      }
      cout << endl;
      return;
   }
   if (idx == v.size())return;

   if (q > 0) {
      // place queen at index idx
      v[idx] = 'Q';
      placeQueen(v, idx + 1, q - 1);
      // unplace the queen
      v[idx] = '-';
      placeQueen(v, idx + 1, q);
   }

}

int main() {

   int n, q;
   cin >> n >> q;

   vector<char> v(n, '-');

   placeQueen(v, 0, q);

   return 0;
}