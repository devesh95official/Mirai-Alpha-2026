#include <bits/stdc++.h>

using namespace std;

void solve(int row, int col, int n, int m, string path) {
   if (row == n && col == m) {
      cout << path << endl;
      return;
   }

   // go down
   solve(row + 1, col, n, m, path + "D");
   // go right
   solve(row, col + 1, n, m, path + "R");
}

int main() {

   int n, m;
   cin >> n >> m;

   solve(0, 0, n, m, "");

   return 0;
}