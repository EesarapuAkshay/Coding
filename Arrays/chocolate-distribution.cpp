https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1

//https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
class Solution{
    public:
    long long findMinDiff(int a[], int n, int m){
         sort(a.begin(),a.end());
         int d;
         int mini=INT_MAX;
    for(int i=0;i+m-1<n;i++)
    {
        d=a[i+m-1]-a[i];
        if(d<mini)
        {
            mini=d;
        }
    }
    return mini;
     
    }
    

};
