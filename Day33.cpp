//Longest Subarray With Sum K (only positives, optimal solution using 2 pointers) 
#include<bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> arr, long long k) {
    int i=0, j=0, n = arr.size();
    long long sum = 0;
    int len = 0;
    while(j<n){
        sum += arr[j];

        while(sum>k){
            sum -= arr[i];
            i++;
        }

        if(sum == k){
            len = max(len, j-i+1);
        }
        j++;
    }
    return len;
}
