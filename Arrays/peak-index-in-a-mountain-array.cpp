//https://leetcode.com/problems/peak-index-in-a-mountain-array
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int n=arr.size();
        
        if(n==1) return 0;
        if(n==2) return arr[0]>arr[1]?0:1;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) {
                return i;
            }
        }
        
        if(arr[0] > arr[1]) return 0;
        else if(arr[n-1] > arr[n-2]) return n-1;
        return -1;
        
        
    }
};
