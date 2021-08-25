//https://practice.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1#
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        int n=str1.size();
        int m=str2.size();
        if(n!=m){
            return false;
        }
        if(n==1){
            if(str1[0]==str2[0]){
                return true;
            }
            return false;
        }
        
        if(str1[0]==str2[n-2] && str1[1]==str2[n-1]){
            return true;
        }
        if(str2[0]==str1[n-2] && str2[1]==str1[n-1]){
            return true;
        }
        
        return false;
    }

};
