//First Greater Height in GFG 
vector<int> greater_height(vector<int>v)
{
    vector<int>res;
    set<int>s;
    for(int i =0; i<v.size(); i++){
        auto it = s.upper_bound(v[i]);
        
        if(it != s.end()){
            res.push_back(*it);
        }
        
        else{
            res.push_back(-1);
        }
        
        s.insert(v[i]);
    }
    return res;
}
