//missingNumbers problem using XOR logic(optimal solution) 
int missingNumber(vector<int>&a, int N) {
    int esum = 0;
    int asum = 0;
    for(int i=0; i<N-1; i++){
        asum = asum ^ a[i];
        esum = esum ^ (i+1);
    }
    esum^=N;
    return esum ^ asum;
}
