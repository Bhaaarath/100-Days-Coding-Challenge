class Solution {
public:
    int speedup = []{
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        std::cout.tie(0);
        return 0;
    }();
    int subarrayCount(vector<int>& nums, int mid) {
        int subcnt = 1;
        int currsum = 0;
        for(int i=0; i<nums.size(); i++){
            int expectedsum = currsum + nums[i];
            if(expectedsum<=mid) currsum += nums[i];
            else{
                subcnt+=1;
                currsum = nums[i];
            }
        }
        return subcnt;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while(low<=high){
            int mid = low + (high-low)/2; // max sum we are taking into consideration
            if(subarrayCount(nums, mid)>k) low = mid+1; // function returning number of subarrays formed using mid as max sum possible
            else high = mid-1;
        }
        return low;
    }
};
