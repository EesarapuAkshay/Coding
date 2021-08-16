//https://leetcode.com/problems/permutations-ii
class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int> nums,int i){
        
        
        if(i==nums.size()){
            ans.push_back(nums);
        }
        
        for(int j=i;j<nums.size();j++){
            
            if(j!=i && nums[i]==nums[j])    continue;
            swap(nums[i],nums[j]);
            helper(nums,i+1);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        helper(nums,0);
        return ans;
    }
};
