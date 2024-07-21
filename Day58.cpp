class Solution {
public:
    int speedup = []{
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        std::cout.tie(0);
        return 0;
    }();
    int findMaxLength(vector<int>& nums) {
        int count = 0, n = nums.size(), maxlen = 0;
        unordered_map<int,int>umap;
        for(int i=0; i<n; i++){
            if(nums[i] == 1) count++;
            else count--;

            if(count == 0) maxlen = max(maxlen, i+1);
            
            if(umap.find(count) != umap.end()){
                maxlen = max(maxlen, i - umap[count]);
            }
            else umap[count] = i;
        }
        return maxlen;
    }
};
