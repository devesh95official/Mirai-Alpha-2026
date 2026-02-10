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

        int cnt[26];
        // store freq in array or map
        {
            // init
            for (int i = 0; i < 26; i++) {
                cnt[i] = 0;
            }
            // cnt the elements in string
            for (int i = 0; i < n; i++) {
                cnt[s[i] - 'a']++; // increasing cnt by 1 for a particular char
            }
        }

        // print ans = sum of largest 2 elements
        {
            sort(cnt, cnt + 26);
            cout << cnt[25] + cnt[24] << endl;
        }
    }

    return 0;
}