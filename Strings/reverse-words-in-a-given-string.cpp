
//https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1#
class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        
        int n=S.size();
        string ans;
        string s;
        string word;
        for(int i=0;i<n;i++){
            if(S[i]=='.'){
                word=S[i]+s; //.like.i
                s="";
            }
            else{
               s=s+S[i];  //i  like
            }
            
            ans=word+ans;
            word="";
        }
        
        if(s!=""){
            ans=s+ans;
        }
        return ans;
    }
};

