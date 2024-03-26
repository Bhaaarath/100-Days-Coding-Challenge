//Prev Permutation of Series GFG
#include <bits/stdc++.h>
using namespace std;

vector<int> prevperm(vector<int>v){ //v={6,4,3,9,5,1}
    int pivot = -1;                 //pivot:2, ele:3
    for(int i=v.size()-2; i>=0; i--){
        if(v[i]>v[i+1]){
            pivot = i;
            break;
        }
    }
    
    if(pivot==-1){
        reverse(v.begin(), v.end());
        return v;
    }
    
    int smallestgreat = INT_MIN;
    int indextoswap = -1;
    for(int i=pivot+1; i<v.size(); i++){
        if(v[pivot]>v[i]){
            smallestgreat = max(smallestgreat, v[i]);
            indextoswap = i;
        }
    }
    
    swap(v[indextoswap], v[pivot]);
    reverse(v.begin()+pivot+1, v.end());
    return v;
}

int main() {
    vector<int>input={5,4,1,2,3};
    vector<int>output = prevperm(input);
    for(int i=0; i<output.size(); i++){
        cout<<output[i]<<" ";
    }
	return 0;
}
