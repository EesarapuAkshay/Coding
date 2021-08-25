//https://practice.geeksforgeeks.org/problems/anagram-1587115620/1#
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        int hash[26]={0};
        
        for(int i=0;i<a.size();i++){
            hash[a[i]-'a']++;
        }
        for(int i=0;i<b.size();i++){
            hash[b[i]-'a']--;
        }
        
        for(int i=0;i<26;i++){
            if(hash[i]!=0){
                return 0;
            }
        }
        return 1;
        
    }

};
