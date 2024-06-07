int consecutiveOnes(vector<int>& arr){
    int maxsofar = 0;
    int maxcurr = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == 1){
            maxcurr+=1;
            maxsofar = max(maxsofar, maxcurr);
        }
        else{
            maxcurr = 0;
        }
    }

    return maxsofar;
}
