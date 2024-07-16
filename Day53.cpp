class Solution {
public:
    int speedup=[]{
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        std::cout.tie(0);
        return 0;
    }();
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
};
