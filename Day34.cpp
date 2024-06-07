#include <bits/stdc++.h>
string read(int n, vector<int> book, int target)
{
    for(int i=0; i<n; i++){
        int present = target - book[i];
        if(find(book.begin(), book.end(), present) != book.end()) return "YES";
    }
    return "NO";
}
/*
#include <bits/stdc++.h>
string read(int n, vector<int> book, int target)
{
    sort(book.begin(), book.end());
    int i = 0, j = n-1;
    while(i<j){
        if(book[i] + book[j] < target){
            i += 1;
        }
        if(book[i] + book[j] > target){
            j -= 1;
        }
        if(book[i] + book[j] == target){
            return "YES";
        }
    }
    return "NO";
}
*/
