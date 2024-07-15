class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low<high){
            int pivot = partition(arr, low, high);
            quickSort(arr, low, pivot-1);
            quickSort(arr, pivot+1, high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       int part = low;
       int i = low;
       int j = high;
       while(i<j){
           while(arr[i]<=arr[part] && i<high){
               i++;
           }
           while(arr[j]>arr[part] && j>low){
               j--;
           }
           if(i<j) swap(arr[i], arr[j]);
       }
       swap(arr[part], arr[j]);
       return j;
    }
};
