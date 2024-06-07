//optimal solution if positive zero & negative elements present
#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& a, int k){
    int n = a.size();
    int maxlen = 0; 
    map<int,int>sni;
    int currsum = 0;

    for(int i=0; i<n; i++){
        currsum+=a[i];
        if(currsum == k){
            maxlen = max(maxlen, i+1);
        }

        int cmk = currsum - k;
        if(sni.find(cmk) != sni.end()){
            int len = i- sni[cmk];
            maxlen = max(maxlen, len);
        }

        if(sni.find(currsum) == sni.end()){
            sni[currsum] = i;
        }
    }
    return maxlen;
}
