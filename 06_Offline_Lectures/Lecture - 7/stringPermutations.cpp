#include <bits/stdc++.h>

using namespace std;

void permute(string s, string ans, vector<int> &vis){
    if (ans.size() == s.size()){
        cout << ans << endl;
        return;
    }

    for (int i = 0 ; i < s.size() ; i++){
        if (vis[i] == 0){
            vis[i] = 1; // take

            permute(s , ans + s[i] , vis);  // explore

            vis[i] = 0;  // not take
        }
    }
}

int main() {

    vector<int> vis(3, 0);
    permute("123", "", vis);

    return 0;
}