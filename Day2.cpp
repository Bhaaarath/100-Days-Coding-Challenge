//Solution for Sum of bit differences question in GeeksforGeeks 
class Solution{
public:
	
	long long sumBitDifferences(int arr[], int n) {
	    long long ans = 0;
	    
	    for(int i=0; i<32; i++){
	        long long set = 0;
	        long long notset = 0;
	        
	        for(int j=0; j<n; j++){
	            if(((arr[j]>>i) & 1) == 1)
	                set++;
	            else
	                notset++;
	        }
	        ans+= 2*(set*notset);
	    }
	    return ans;
	}
};
