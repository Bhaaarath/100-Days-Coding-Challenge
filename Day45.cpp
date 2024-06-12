//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&arr, int n){   
        int prefixsum = 0, maxilen = INT_MIN, curlen = 0;
        map<int,int>mp;
        
        for(int i=0; i<n; i++){
            prefixsum += arr[i];
            
            if(prefixsum == 0) curlen = i+1;
            
            else{
                if(mp.find(prefixsum) == mp.end()){
                    mp[prefixsum] = i;
                }
                else{
                    curlen = i - mp[prefixsum];
                }
            }
            maxilen = max(maxilen, curlen);
        }
        if(maxilen==INT_MIN) return 0;
        return maxilen;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends
