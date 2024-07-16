#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   
   map<int, int>umap;
   vector<vector<int>>res;

   for(int i=0; i<arr.size(); i++){
      int oh = s - arr[i];
      vector<int>inter;

      if(umap[oh] != 0){
         int count = umap[oh];
         while(count--){
            inter.push_back(min(oh, arr[i]));
            inter.push_back(max(oh, arr[i]));
            res.push_back(inter);
         }
      }

      umap[arr[i]]++;
   }
   sort(res.begin(), res.end());
   return res;

}
