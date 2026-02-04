// https://leetcode.com/problems/running-sum-of-1d-array/description/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        // using sum variable // O(n)
        // int sum = 0;
        // for(int i = 0; i < n ;i++){
        //     sum += nums[i];
        //     ans[i] = sum;
        // }

        // O(n*n)
        // for (int i=0;i<n;i++){
        //     int sum =0;
        //     for(int j=0;j<=i;j++){
        //         sum += nums[j];
        //     }
        //     ans[i] = sum;
        // }

        // pref sum approach O(n)
        ans[0] = nums[0];
        for (int i = 1;i<n;i++)ans[i] = ans[i-1] + nums[i];
        return ans;
    }
};