//longest consecutive 1's GFG
#include <bits/stdc++.h>
string toBinary(int x){
    string binarynum  ="";
    while(x>0){
        binarynum += to_string(x%2);
        x/=2;
    }
    reverse(binarynum.begin(), binarynum.end());
    return binarynum;
}

int maxConsecutiveOnes(int x)
{
    int largest = INT_MIN;
    string binrep = toBinary(x);
    for(int i=0; i<binrep.length(); i++){
        int len = 0;
        while(binrep[i]=='1'){
            len++;
            largest = max(largest, len);
            i++;
        }
    }
    
    return largest;
}
