#include <vector>
#include <utility>
#include <iostream>
#include <algorithm>
#define f first
#define s second
#define fore(i,a,b) for(int i = (a), ThxMK = (b); i < ThxMK; ++i)
#define pb push_back
#define all(s) begin(s), end(s)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz(s) int(s.size())
#define ENDL '\n'
using namespace std;
typedef long double ld;
typedef long long lli;
typedef pair<lli,lli> ii;
typedef vector<lli> vi;
#define deb(x) cout << #x": " << (x) << endl;

lli find(vi& v, lli x){
    lli l = 0LL, r = (lli) sz(v) - 1;
    while(r - l > 1){
        lli mid = (lli)(l + r)/2;
        if (v[mid] == x) return mid;
        else if(v[mid] < x) l = mid;
        else r = mid;
    }
    return l;
}

int main()
{
    _
    lli coin;
    vi coins, res;
    int t; cin>>t;
    while(t--){  cin>>coin; coins.pb(coin);  }

    lli m = *max_element(all(coins));

    res.pb(0);
    fore(i,1,m){
        res.pb(0);
        res[i] +=  res[i-1] + i;
        if(res[i]>=m) break;
    }

    for(auto c: coins){
        cout << find(res, c) << ENDL;
    }

    return 0;
}
