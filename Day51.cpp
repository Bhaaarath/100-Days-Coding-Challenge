class Solution {
public:
    int beauty(int c[26], int n){
        int mf = INT_MIN;
        int lf = INT_MAX;
        for(int i=0; i<n; i++){
            mf = max(mf, c[i]);
            if(c[i]>=1){
                lf = min(lf, c[i]);
            }
        }
        return mf - lf;
    }
    int beautySum(string s) {
        int res = 0;
        for(int i=0; i<s.size(); i++){
            int c[26] = {0};
            for(int j=i; j<s.size(); j++){
                c[s[j] - 97]++;
                res += beauty(c, 26);
            }
        }
        return res;
    }
};
