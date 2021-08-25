//https://practice.geeksforgeeks.org/problems/three-way-partitioning/1
class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    vector<int> threeWayPartition(vector<int>& A,int a, int b)
    {
        // code here 
    int low=0,mid=0,high=A.size()-1;
    while(mid<=high)
    {
        if(A[mid]<a)
        {
            swap(A[mid],A[low]);
            low++;
            mid++;
        }
        else if(A[mid]>b)
        {
            swap(A[mid],A[high]);
            high--;
        }
        else
        {
            mid++;
        }
    }
    return A;
   }
   };
