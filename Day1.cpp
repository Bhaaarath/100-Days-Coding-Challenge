//Solution for Peak Element question in GeeksforGeeks
// The function should return the index of any of the
// peak element present in the array 

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
        if(arr[0]>=arr[1]){
           return 0;
       }
       
       if(arr[n-1]>=arr[n-2]){
           return n-1;
       }
       
       for(int i=1; i<n-1; i++){
           if(arr[i]>=arr[i-1] and arr[i]>=arr[i+1]){
               return i;
           }
       }
    }
};
