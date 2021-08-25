//https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1#
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      int hash[1000000]={0};
      for(int i=0;i<N;i++){
          hash[arr[i]]++;
      }
      int max=0,cnt=0;
      for(int i=1;i<1000000;i++){
          if(hash[i]>=1){
              cnt++;
              if(cnt>max){
                  max=cnt;
              }
    
          }
          else{
                  cnt=0;
              }
      }
      
      return max;
    }
};
