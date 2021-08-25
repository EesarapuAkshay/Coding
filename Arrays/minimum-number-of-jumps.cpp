//https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int jump=0;
        int s=0;
        int p=0;
        for(int i=0;i<n;i++){
            p=max(p,i+arr[i]); //1
            if(i==s){ 
                jump++; //1 2 3
                s=p;   //1 4 13
            }
            else if(s>=n-1){
                break;
            }
        }
        if(s<n-1){
            return -1;
        }
        return jump;
    }
};

