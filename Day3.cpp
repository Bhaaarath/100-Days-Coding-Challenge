//solution to "Chocolate Distribution" problem GFG 
class Solution {
  public:
    int chocolateDistribution(int N, int M, vector<int> &arr, vector<int> &brr) {
        sort(arr.begin(), arr.end()); //{8,15,20,55}
        sort(brr.begin(), brr.end()); //{2,17,22}
        
        int count = 0;
        int i=0,j=0;
        
        while(i<N && j<M){
            if(arr[i]<=brr[j]){
                count++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        
        return count;
    }
};
