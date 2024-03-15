//Josephus Problem code C++
class Solution
{
    public:
    int josephus(int n, int k)
    {
        list<int>l;
        for(int i=1; i<=n; i++){
            l.push_back(i);
        }
        
        auto it = l.begin();
        while(l.size()>1){
            int count = 1;
            for(count; count<k; count++){
                it++;
                if(it == l.end()) it = l.begin();
            }
            it = l.erase(it);
            if(it == l.end()) it = l.begin();
        }
        
        return *l.begin();
    }
};
