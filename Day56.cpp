#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& num) {
        int res = 0;
        for(int i=1; i<num.size(); i++){
            if(num[i] == num[i-1]){
                num[i-1] = INT_MIN;
            }
        }

        for(int i=0; i<num.size(); i++){
            if(num[i] != INT_MIN) res+=1;
        }
        int j = 0;
        for(int i=0; i<num.size(); i++){
            if(num[i] != INT_MIN){
                num[j] = num[i];
                j++;
            }
        }

        return res;
    }
};
