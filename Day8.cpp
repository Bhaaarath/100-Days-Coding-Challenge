//Sieve of Eratosthenes C++ code
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=20;
    int arr[n] = {0}; //set all to prime
    for(int i=2; i<=n; i++){
        if(arr[i] == 0){
            for(int j=i*i; j<=n; j+=i){
                arr[i] = 1; //set to non prime
            }
        }
    }
    
    for(int i=2; i<=n; i++){
        if(arr[i] == 0){
            cout<<i<<" ";
        }
    }
}
 
