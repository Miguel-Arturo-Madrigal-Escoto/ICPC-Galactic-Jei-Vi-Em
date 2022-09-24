#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#define fore(i,a,b) for(int i = (a), ThxMK = (b); i < ThxMK; ++i)

using namespace std;
typedef long long lli;
typedef vector<lli> vi;

// C - Books

vi books;

bool canread(int u, lli m) {
    lli acum = 0;
    for(int i = 0; i < u; i++) acum += books[i];
    if(acum <= m) return true;
    for(int i = u; i < books.size(); i++) {
        acum += books[i];
        acum -= books[i - u];
        if(acum <= m) return true;
    }
    return false;
}

int main(){
    lli n, t, num = 0, tot = 0, res = 0;
    cin >> n >> t; cin.ignore();

    for(int i = 0; i < n; i++){
        cin >>num; cin.ignore();
        books.push_back(num);
        tot += books[i];
    }

    for(int i = n; i > 0; i /= 2){
         while((res + i <= n) and canread(res + i, t))
            res += i;
    }

    cout << res;

    return 0;
}

/*
In:
The first line contains two integers n and t (1 ≤ n ≤ 105; 1 ≤ t ≤ 109) — the number of books and the number of free minutes Valera's got. The second line contains a sequence of n integers a1, a2, ..., an (1 ≤ ai ≤ 104), where number ai shows the number of minutes that the boy needs to read the i-th book.
Out:
Print a single integer — the maximum number of books Valera can read.

In: 
4 5
3 1 2 1
Out:
3

In:
3 3
2 2 3
Out:
1
*/