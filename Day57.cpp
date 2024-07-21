//Code for finding first "numRows" rows of the Pascal's Triangle
class Solution {
public:
    int comb(int n, int c){
        int res = 1;
        for(int i=0; i<c; i++){
            res *= n-i;
            res /= i+1;
        }
        return res;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1; i<=numRows; i++){
            vector<int>inter;
            for(int j = 1; j<=i; j++){
                int ele = comb(i-1, j-1);
                inter.push_back(ele);
            }
            ans.push_back(inter);
        }
        return ans;
    }
};
