// lc - 904

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int, int> cnt;
        int left = 0, ans = 0;
        for (int right = 0; right < fruits.size(); right++) {
        cnt[fruits[right]]++;
        while (cnt.size() > 2) {
            cnt[fruits[left]]--;
            if (cnt[fruits[left]] == 0)cnt.erase(fruits[left]);
            left++;
        }
        ans = max(ans, right - left + 1);
    }
    return ans;
    }
};