#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n){
   
   for(int i=0; i<n; i++){
       for(int j=0; j<n-i-1; j++){
           if(arr[j]>arr[j+1]){
               swap(arr[j], arr[j+1]);
           }
       }
   }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {11,2,45,7};
    bubblesort(arr, 4);
    return 0;
}
