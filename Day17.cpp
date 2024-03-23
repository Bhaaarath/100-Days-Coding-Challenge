//Maximum Subarray Sum using Kadane's Algorithm 
//commented lines is for finding the actual subarray which gives the maximum sum
long long maxSubarraySum(vector<int> arr, int n)
{
    long long sum=0;
    long long res = LONG_MIN;
    //int start = -1;
    //int end = -1;

    for(int i=0; i<n; i++){
        //if(sum == 0) start = i;
        sum+=arr[i];
        if (sum > 0) {
          res = max(res, sum);
          //end = i;
        }
        else sum = 0;
    }
    
    if(res==LONG_MIN) return 0;
    else return res;
}
