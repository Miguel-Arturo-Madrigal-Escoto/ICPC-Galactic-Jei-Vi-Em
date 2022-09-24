#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;

vi criba;


void makeCriba(int x){
    criba.resize(x, 1);
    criba[0] = 0;
    for(int i = 2; i < x; ++i){
        for(int j = i; j < x; j +=i ) criba[j] += i;
    }
}


int main()
{
    int t, n, mn = 0; 
    vi nums;
    cin >> t; cin.ignore();

    while(t--){
        cin >> n;
        if (n > mn) mn = n;
        nums.push_back(n);
    }

    makeCriba(mn + 1);

    for(auto &e: nums){
        cout << criba[e] - e << endl;
    }
    
    return 0;
}