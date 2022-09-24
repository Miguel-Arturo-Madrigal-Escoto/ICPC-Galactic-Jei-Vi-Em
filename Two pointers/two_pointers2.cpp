#include <utility>
#include <iostream>
#include <algorithm>
#include <vector>
#define f first
#define s second
#define fore(i, a, b) for (int i = (a), T = (b); i < T; ++i)
#define IO  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define all(s) begin(s), end(s)
#define sz(s) int(s.size())
#define ENDL '\n'
using namespace std;
typedef long double ld;
typedef long long lli;
typedef pair<lli, lli> ii;
typedef vector<lli> vi;
#define deb(x) cout << #x ": " << (x) << endl;

int main()
{
    IO
    lli n, s;
    cin >> n;
    vi sts;

    fore(i, 0, n)
    {
        cin >> s;
        sts.pb(s);
    }

    sort(all(sts));
    /*
        6
        1 10 17 12 15 2

        1 2 10 12 15 17
    */
    lli l = 0, r = 0, maxx = 0;
    
    while(r < sz(sts)){
        if (sts[r] - sts[l] <= 5){
            r++;
            maxx = max(maxx, r - l);
        } else l++; 
    }

    cout << maxx << ENDL;

    return 0;
}
