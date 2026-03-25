#include <bits/stdc++.h>
// with obstacles
using namespace std;

void solve(int row, int col, int n, int m, string path, vector<string>&v) {
   if (v[row][col] == '#')return;
   if (row == n - 1 && col == m - 1) {
      cout << path << endl;
      return;
   }

   // go down
   if (row + 1 < n)solve(row + 1, col, n, m, path + "D", v);
   // go right
   if (col + 1 < m)solve(row, col + 1, n, m, path + "R", v);
}

int main() {
   
//    6 6
// .#...#
// ...#.#
// #.#..#
// .....#
// ###.##
// ......
   
//DRDDRRDDRR

   int n, m;
   cin >> n >> m;
   vector<string> v(n);
   for (int i = 0; i < n; i++) {
      cin >> v[i];
   }

   solve(0, 0, n, m, "", v);
   //solve(2, 2, 4, 5, "", v);

   return 0;
}