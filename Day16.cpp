//Pangram checking of strings GFG
#include <bits/stdc++.h> 
using namespace std; 

string ispangram(string a){
    if(a.size()<26) return "No";
    
    transform(a.begin(), a.end(), a.begin(), ::tolower); 
    map<char,int>mp;
    for(int i=0; i<a.size(); i++){
        mp[a[i]]++;
    }
    
    for(char check='a'; check<='z'; check++){
        if(mp[check] == 0) return "No";
    }
    
    return "Yes";
}

int main() 
{ 
    string res = ispangram("The quick brown fox jumpsk over the lazy dog");
    cout<<res;
    return 0;
}
