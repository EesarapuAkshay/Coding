//https://leetcode.com/problems/add-strings/
class Solution {
public:
    string addStrings(string num1, string num2) {  
        int carry=0;
        int n=num1.size()-1;
        int m=num2.size()-1;
        string result;
        while(n>=0 || m>=0 || carry>=1){
            int s=n>=0?num1[n--]-'0':0;
            int t=m>=0?num2[m--]-'0':0;
            
            int sum=s+t+carry;
            
            carry=sum/10;
            sum=sum%10;
            
            result=to_string(sum)+result;
        }   
        return result == "" ? "0" : result ;
        
        /* fails for larger values .................!
        
        int n=stoi(num1);
        int m=stoi(num2);
        
        int sum=n+m;
        
        string s=to_string(sum);
        
        return s;
        
        */
        
    }
};
