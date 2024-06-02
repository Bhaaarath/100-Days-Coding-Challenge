//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int n, int p)
    {
        for(int i=0, j=0; i<n; i++){
            if(arr[i]>0 && arr[i]<=n){
                j = arr[i]-1;
                
                if(arr[j]<=0){
                    arr[i] = 0;
                    arr[j] -= 1;
                    i++;
                }
                else{
                    swap(arr[i], arr[j]);
                    arr[j] = -1;
                }
            }
            else if(arr[i]>n){
                arr[i] = 0;
                i++;
            }
            else i++;
        }
        
        for(int i=0; i<n; i++){
            arr[i] *=-1;
        }
    }
};


//{ Driver Code Starts.

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}





// } Driver Code Ends
