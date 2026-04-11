#include <bits/stdc++.h>

using namespace std;

bool solved = false;

// sudoku solver
bool isValid(vector<vector<int>>&v, int r, int c, int num) {
    // row
    for (int i = 0; i < 9; i++) {
        if (v[r][i] == num)return false;
    }
    // col
    for (int i = 0; i < 9; i++) {
        if (v[i][c] == num)return false;
    }
    // 3*3 grid
    int sr = (r / 3) * 3;
    int sc = (c / 3) * 3;
    for (int i = sr; i < sr + 3; i++) {
        for (int j = sc; j < sc + 3; j++) {
            if (v[i][j] == num)return false;
        }
    }
    return true;
}

bool solve(vector<vector<int>>&v) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (v[i][j] == 0) {
                for (int num = 1; num <= 9; num++) {
                    if (isValid(v, i, j, num)) {
                        v[i][j] = num;
                        if (solve(v))return true;
                        v[i][j] = 0; // backtrack
                    }
                }
                return false;
            }
        }
    }
    return true;
}

int main() {

    vector<vector<int>> v(9, vector<int> (9));
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> v[i][j];
        }
    }

    //cout << isValid(v, 4, 4, 5);
    bool ans = solve(v);

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}