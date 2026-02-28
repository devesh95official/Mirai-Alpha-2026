#include <bits/stdc++.h>

using namespace std;

// using binary_search method
bool search_2D(vector<vector<int>>& matrix, int target) {
   int m = matrix.size();
   int n = matrix[0].size();

   for (int i = 0; i < m; i++) {
      if (binary_search(matrix[i].begin(), matrix[i].end(), target))return true;
   }

   return false;
}

int main() {

   vector<vector<int>> matrix = {{1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}
   };
   int target = 9;

   if (search_2D(matrix, target))cout << "Found\n";
   else cout << "Not Found\n";

   return 0;
}