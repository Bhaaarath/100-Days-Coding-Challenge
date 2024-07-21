#include<bits/stdc++.h>
using namespace std;
int subarraysWithSumK(vector < int > A, int B) {
    unordered_map<int,int>umap;
    int count = 0, n1 = A.size(), curr_res = A[0];
    if(curr_res == B)count++;
    umap[curr_res]++;
    for(int i=1; i<n1; i++){
        curr_res ^= A[i];
        if(curr_res == B)count++;
        
        int oh = curr_res ^ B;
        if(umap.find(oh) != umap.end()) count+=umap[oh];
        umap[curr_res]++;
    }
    return count;   
}
