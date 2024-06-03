void merge(vector<int> &arr, int start, int mid, int end){
    vector<int>temp;
    int fbegin = start;
    int sbegin = mid+1;
    while(fbegin<=mid && sbegin<=end){
        if(arr[fbegin]<arr[sbegin]){
            temp.push_back(arr[fbegin]);
            fbegin+=1;
        }
        else{
            temp.push_back(arr[sbegin]);
            sbegin+=1;
        }
    }
    while(fbegin<=mid){
        temp.push_back(arr[fbegin]);
        fbegin+=1;
    }
    while(sbegin<=end){
        temp.push_back(arr[sbegin]);
        sbegin+=1;
    }
    
    for(int i=start; i<=end; i++){
        arr[i] = temp[i-start];
    }
}

void divide(vector<int> &arr, int start, int end){
    if(start>=end) return;
    int mid = (start + end)/2;
    divide(arr, start, mid);
    divide(arr, mid+1, end);
    merge(arr, start, mid, end);
}

void mergeSort(vector < int > & arr, int n) {
    divide(arr, 0, n-1);
}
