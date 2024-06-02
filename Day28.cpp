#include <bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int n){
   
   for(int i=1; i<n; i++){
       for(int j=i; j>0; j--){
         if(arr[j]<arr[j-1]) swap(arr[j], arr[j-1]);
       }
   }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {11,2,45,7};
    insertionsort(arr, 4);
    return 0;
}
