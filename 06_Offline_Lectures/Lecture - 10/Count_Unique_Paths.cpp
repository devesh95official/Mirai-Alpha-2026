#include <bits/stdc++.h>

using namespace std;

int solve(int row, int col) {
   if (row == 0 || col == 0)return 1;
   return solve(row - 1, col) + solve(row, col - 1);
}

int main() {

   int n, m;
   cin >> n >> m;

   cout << solve(n - 1, m - 1);

   return 0;
}