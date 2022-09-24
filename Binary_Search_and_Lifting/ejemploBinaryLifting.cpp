#include <vector>
#include <utility>
#include <iostream>
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
typedef vector<vi> vvi;
#define deb(x) cout << #x": " << (x) << endl;
 
lli find(vi &v, lli x){
    lli c = 0;
    for(lli p = sz(v); p; p /= 2)
        while(c + p < sz(v) && v[c + p] <= x) c+=p;
    return c;
}
 
int main(){
    lli nbooks, book, fmin, maxx = 0;
    vi books, aux;
    cin>>nbooks>>fmin;
 
    //books.pb(0);
    books.resize(nbooks+1,0LL);
    fore(k,1,nbooks+1){ 
        cin>>book; 
        books[k] = books[k-1]+book;
    }

    if(sz(books)==2){
        if(books[1]<=fmin) cout << 1 << ENDL;
        else cout << 0 << ENDL;

    } else {
        fore(i,1,nbooks+1){ 
            lli r = find(books, fmin+books[i-1]);
            maxx = max(maxx, r - (i-1));
        }
        cout << maxx << ENDL;
    }
 
    return 0;
}
