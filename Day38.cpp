int longestSuccessiveElements(vector<int>&a) {
    sort(a.begin(), a.end()); //[1,2,3,4,5,8]
    int longestlen = INT_MIN, currlen = 1, prevmin = INT_MIN;
    for(int i=0; i<a.size(); i++){
        if(a[i] - 1 == prevmin){
            currlen+=1;
            prevmin = a[i];
        }
        else if(a[i] != prevmin){
            currlen = 1;
            prevmin = a[i];
        }

        longestlen = max(longestlen, currlen);
    }

    return longestlen;
}
