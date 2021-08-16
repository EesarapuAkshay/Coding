//https://leetcode.com/problems/permutations/
class Solution {
public:
    void perm(vector<int>& nums,int i,vector<vector<int>> &res){
        if(i==nums.size()){
            res.push_back(nums);
            return ;
        }
        
        
        
        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            perm(nums,i+1,res);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> res;
        vector<int> s;
        perm(nums,0,res);
        
        return res;
        
    }
};
