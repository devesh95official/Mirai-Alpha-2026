#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        // insert elements in set
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            s.insert(nums[i]);
        }

        if (s.size() < 3)return *(--s.end());
        else  return *(--(--(--s.end())));
    }
};

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    cout << thirdMax(v);

    return 0;
}