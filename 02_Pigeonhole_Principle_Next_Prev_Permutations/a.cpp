// https://leetcode.com/problems/find-the-duplicate-number/description/

#include <bits/stdc++.h>

using namespace std;

int findDuplicate(vector<int>& nums) {
    unordered_set<int> s;
    for (int x : nums) {
        if (s.count(x)) return x;
        s.insert(x);
    }
    return 0;
}

int main() {
    
    vector<int> v = {1, 2, 3, 4, 2};
    cout << findDuplicate(v) << endl;

    return 0;
}