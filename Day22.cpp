//Solution of Count Digits problem on GFG
class Solution{
public:
    int evenlyDivides(int N){
        int evendivide = 0;
        int num = N;
        while(N>0){
            int lastdigit = N%10;
            if(lastdigit != 0 && num % lastdigit == 0){
                evendivide+=1;
            }
            N/=10;
        }
        
        return evendivide;
    }
};
