// https://www.codechef.com/problems/AABBCCDD

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        // to lower all the string
        {
            for (int i = 0; i < n; i++) {
                s[i] = tolower(s[i]);
            }
        }

        map<char, int> mp;
        // store freq in array or map
        {
            // cnt the elements in string
            for (int i = 0; i < n; i++) {
                mp[s[i]]++; // increasing cnt by 1 for a particular char
            }
        }

        // print ans = sum of largest 2 elements
        {
            vector<int> v;
            for (auto x : mp)v.push_back(x.second);
            sort(v.begin(), v.end());
            int m = v.size();
            cout << v[m - 1] + v[m - 2] << endl;
        }
    }

    return 0;
}