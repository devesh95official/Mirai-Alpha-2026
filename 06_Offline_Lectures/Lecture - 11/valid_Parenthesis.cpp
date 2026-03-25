#include <bits/stdc++.h>

using namespace std;

bool valid(string ans) {
    stack<char> s;
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] == '(')s.push('(');
        else {
            if (!s.size())return false;
            if (s.top() == '(')s.pop();
            else return false;
        }
    }
    return (s.size() == 0);
}
//valid parenthesis
void solve(int open, int close, int n, string ans) {
    if (ans.size() == 2 * n) {
          if (valid(ans))cout << ans << endl;
        return;
    }

    if (open < n)solve(open + 1, close, n, ans + "(");
    if (close < n)solve(open, close + 1, n, ans + ")");
}

int main() {

    int n;
    cin >> n;

    solve(0, 0, n, "");

    return 0;
}