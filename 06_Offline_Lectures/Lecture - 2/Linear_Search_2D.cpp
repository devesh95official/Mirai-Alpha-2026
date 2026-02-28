#include <bits/stdc++.h>

using namespace std;

bool linear_search_2D(vector<vector<int>> matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == target)return true;
        }
    }

    return false;
}

int main() {

    vector<vector<int>> matrix = {{1, 2, 3},
        {4, 5, 6}
    };
    int target = 7;

    if (linear_search_2D(matrix, target))cout << "Found\n";
    else cout << "Not Found\n";

    return 0;
}