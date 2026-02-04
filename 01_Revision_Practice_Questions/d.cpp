// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        // nums.erase(unique(nums.begin(),nums.end()),nums.end());
        // return nums.size();
        int i = 0;
    
        while(i+1<nums.size()){
            if(nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i); //O(n)
            }
            else i++;
        }

        return nums.size();
    }
};