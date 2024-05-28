#include <bits/stdc++.h>
using namespace std;

bool armstrong(int num){
    int cnt = (int)(log10(num)+1);
    int op = 0;
    int dup = num;
    while(dup>0){
        int digit = dup%10;
        op += pow(digit, cnt);
        dup/=10;
    }
    
    if(op==num) return 1;
    else return 0;
}

int main() {
    int n = 1;
    bool res = armstrong(n);
    cout<<res;
	return 0;
}
