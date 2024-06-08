//Alternative Numbers with equal number of positive and negative numbers
int speedUp = [] {
    std::ios::sync_with_stdio(0); //code to speeden up (competitive programming)
    std::cin.tie(0);
    return 0;
}();

vector<int> alternateNumbers(vector<int>&a) {
    vector<int>res(a.size(), 0);
    int p = 0, n = 1;
    for(int i=0; i<a.size(); i++){
        if(a[i] < 0){
            res[n] = a[i];
            n+=2;
        }
        else{
            res[p] = a[i];
            p+=2;
        }
    }
    return res;
}
