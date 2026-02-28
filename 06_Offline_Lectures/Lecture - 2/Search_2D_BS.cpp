#include <bits/stdc++.h>

using namespace std;

bool BS (vector<int> & v, int t) {
   int l = 0, r = v.size() - 1;
   while (l <= r) {
      int m = l + (r - l) / 2;
      if (v[m] == t)return true;
      else if (v[m] > t)r = m - 1;
      else l = m + 1;
   }
   return false;
}


bool search_2D(vector<vector<int>>& matrix, int target) {
   int m = matrix.size();
   int n = matrix[0].size();

   for (int i = 0; i < m; i++) {
      if (BS(matrix[i], target))return true;
   }

   return false;
}

int main() {

   vector<vector<int>> matrix = { {1, 2, 3},
                                  {4, 5, 6},
                                  {7, 8, 9}
   };
   int target = 5;

   if (search_2D(matrix, target))cout << "Found\n";
   else cout << "Not Found\n";

   return 0;
}