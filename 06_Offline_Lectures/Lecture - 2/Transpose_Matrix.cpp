#include <bits/stdc++.h>

using namespace std;


// transpose matrix code
int main() {

    vector<vector<int>> matrix = {{1, 2, 3},
           {4,5,6},
           {7,8,9}
    };

    int m = matrix.size();
    int n = matrix[0].size();
    
    vector<vector<int>> ans(n, vector<int>(m));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            ans[j][i] = matrix[i][j];
        }
    }

    // print ans
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}