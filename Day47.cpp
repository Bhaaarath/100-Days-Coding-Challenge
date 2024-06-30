int maxele(vector<int>& arr){
	int maxi = INT_MIN;
	for(int i=0; i<arr.size(); i++){
		maxi = max(maxi, arr[i]);
	}
	return maxi;
}

int divsum(vector<int>& arr, int mid){
	int ans = 0;
	for(int x:arr){
		ans = ans + (x/mid) + (x%mid);
	}
	return ans;
}

int smallestDivisor(vector<int>& arr, int limit){
	int low=0, high=maxele(arr), res = INT_MAX;
	while(low<=high){
		int mid = (low+high)/2;
		if(divsum(arr, mid)<=limit){
			res = min(res, mid);
			high = mid-1;
		}
		else low = mid+1;
	}
	return res;
}
