//solution of "minimum vertical sum" gfg
int minimum_vertical_sum(vector<vector<int>>&v)
{
    int maxsize = 0;
    int res = INT_MAX;
    
    for(const vector<int> &x:v){
        if(maxsize<x.size()) maxsize = x.size();
    }
    
    for(vector<int> &x:v){
        x.resize(maxsize, 0);
    }
    
    for(int i=0; i<v[0].size(); i++){
        int sum = 0;
        for(int j=0; j<v.size(); j++){
            sum += v[j][i];
        }
        res = min(res, sum);
    }
    
    return res;
    
}
