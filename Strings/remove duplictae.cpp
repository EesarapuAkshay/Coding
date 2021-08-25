//https:practice.geeksforgeeks.org/problems/remove-duplicates3034/1#
class Solution{
public:	
		
	string removeDups(string S) 
	{
	    // Your code goes here
	    //avvo 
	    
	    int hash[26]={0};
	    string s;
	    for(int i=0;i<S.size();i++){
	        if(hash[S[i]-'a']==0){
	            s+=S[i];
	        }
	        
	        hash[S[i]-'a']++;
	    }
	    
	    return s;
	    
	    
	}
};

