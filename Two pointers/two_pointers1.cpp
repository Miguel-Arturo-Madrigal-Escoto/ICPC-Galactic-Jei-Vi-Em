#include <vector>
#include <utility>
#include <iostream>
#include <algorithm>
#define f first
#define s second
#define fore(i,a,b) for(int i = (a), ThxMK = (b); i < ThxMK; ++i)
#define pb push_back
#define all(s) begin(s), end(s)
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz(s) int(s.size())
#define ENDL '\n'
using namespace std;
typedef long double ld;
typedef long long lli;
typedef pair<lli,lli> ii;
typedef vector<lli> vi;
#define deb(x) cout << #x": " << (x) << endl;

int main(){
    lli d, n; cin>>d;
    vi v;

    fore(i,0,d){
        cin>>n;
        v.pb(n);
    }

    lli l = 0, r = sz(v)-1, acumL = v[l], acumR = v[r];
    lli curr = 0;

    while(l != r){
        //1 3 1 1 4
        if (acumL == acumR) {
            curr = acumL;  
            if(l - 0 < sz(v)-r){
                l++;    
                acumL += v[l];
            } else {
                r--;
                acumR += v[r];
            }
        }

        else if (acumL < acumR){
            l++;
            acumL += v[l];
        }
        else if (acumL > acumR){
            r--;
            acumR += v[r];
        }
        
    }

    cout << curr << ENDL;


    return 0;
}
