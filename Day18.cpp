//Fibonacci series up to Nth term in GFG
class Solution {
  public:
    vector<int> Series(int n) {
        int i=1;
        int modulo = 1e9+7;
        int a = 0;
        int b = 1;
        vector<int>v;
        v.emplace_back(0);
        v.emplace_back(1);

        while(i<n){
            int sum = (a+b)%modulo;
            v.emplace_back(sum);
            a = b;
            b = sum;
            i++;
        }
        return v;
    }
};
