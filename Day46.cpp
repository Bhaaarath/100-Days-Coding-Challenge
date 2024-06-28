int singleNonDuplicate(vector<int>& arr){
	int n=arr.size();
	if(arr[0]!=arr[1])return arr[0];
	else if(arr[n-1]!=arr[n-2])return arr[n-1];

	int low=1, high=n-2;
	while(low<=high){
		int mid = (low+high)/2; //index position
		if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]) return arr[mid];

		else if(arr[mid]==arr[mid-1]){
			if(mid%2!=0){
				low= mid+1;
			}
			else high = mid-1;
		}
		else if(arr[mid]==arr[mid+1]){
			if(mid%2!=0){
				high= high-1;
			}
			else low = mid+1;
		}
	}
}
