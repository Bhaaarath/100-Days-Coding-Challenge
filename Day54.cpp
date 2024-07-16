class Solution {
public:
    bool check(vector<int>& nums) {
        int x = 0, n = nums.size();

        for(int i=0; i<n-1; i++){
            if(nums[i]>nums[i+1]) x++;
        }

        if(nums[n-1]>nums[0]) x++;

        return x<=1;
    }
};
