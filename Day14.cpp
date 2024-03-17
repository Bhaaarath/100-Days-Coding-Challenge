// solution of "Shopkeeper Profit" GFG
class Solution{
    public:
        int profit(vector<int>V)
    {
        int sum = 0;
        stack<int>s;
        s.push(V[0]);
        
        for(int i=1; i<V.size(); i++){
            while(!s.empty() && s.top()<=V[i]){
                sum+=V[i] - s.top();
                s.pop();
            }
            s.push(V[i]);
        }
        
        while(!s.empty()){
            sum += s.top();
            s.pop();
        }
        
        return sum;
    }
};
