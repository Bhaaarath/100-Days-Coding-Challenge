//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long int subarrcntwithatleast(string s, int n, int k){
        int f = 0, j = 0, cnt[26];
        long long int count = 0;
        
        for(int i = 0; i<26; i++){
            cnt[i] = 0;
        }
        for(int i=0; i<n; i++){
            while(j<n && f<k){
                cnt[s[j] - 97]++;
                if(cnt[s[j] - 97] == 1) f++;
                j++;
            }
            
            if(f>=k) count += n-j+1;
            
            cnt[s[i] - 97]--;
            if(cnt[s[i] - 97] == 0) f--;
        }
        return count;
    }
    
    long long int substrCount (string s, int k) {
    	int n = s.size();
    	long long int ans = 0;
    	ans = subarrcntwithatleast(s, n, k) - subarrcntwithatleast(s, n, k+1);
    	return ans;
    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends
