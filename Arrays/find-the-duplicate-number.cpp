//https://leetcode.com/problems/find-the-duplicate-number/
class Solution {
public:
    
    int findDuplicate(vector<int>& nums) {
        /* btr apporach
        int slow=nums[0];
        int fast=nums[0];
        do
        {
           slow=nums[slow]; 
           fast=nums[nums[fast]];
        }while(slow!=fast);
        
        fast=nums[0];
        while(slow!=fast)
        {
            slow=nums[slow]; 
             fast=nums[fast];
        }
        return slow;
    */
        sort(nums.begin(),nums.end()); // 1  2 2 3 4
        int n=nums.size();
        int d=0;
        for(int i=0;i<n;i++){
            if(nums[i]==nums[i+1]){
                d=nums[i];
                break;
            }
        }
        
        return d;
    }
};
