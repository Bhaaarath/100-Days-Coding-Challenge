#include <bits/stdc++.h>
string read(int n, vector<int> book, int target)
{
    for(int i=0; i<n; i++){
        int present = target - book[i];
        if(find(book.begin(), book.end(), present) != book.end()) return "YES";
    }
    return "NO";
}
