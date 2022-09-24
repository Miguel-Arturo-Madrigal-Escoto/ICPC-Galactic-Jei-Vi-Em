#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fore(i,a,b) for(int i = a, T = b; i < T; ++i)
#define sz(s) int(s.size())
#define pb push_back
#define pba pop_back
#define f first
#define s second
#define all(s) begin(s),end(s)
#define ENDL '\n'

using namespace std;

///types
typedef long double ld;
typedef long long lli;
typedef pair<lli,lli> ii;
typedef vector<lli> vi;

bool compare(const lli x, const lli y){
	// invertir < (ascendente) > (descendente)
	return x > y;
}

int main(){
	vi v = { 1, 7, 5, 2, 14, -3, 90, -2 };
	// ordenamiento ascendente de vector
	/*sort(all(v))*/

	// ordenamiento descendente de vector
	/*sort(all(v), greater<lli>());*/
	
	// ordenamiento con funcion externa
	//sort(all(v), compare);
	
	// ordenamiento con lambda
	/*sort(all(v), [](const lli x, const lli y){
		return x > y;
	});
	*/ 
	
	// mostrar vector
	for(const auto& e: v){
		cout << e << ENDL;
	}
	
	// VECTOR DE PAIR
	vector<ii> vc = { {1,3}, {0,5}, {9,0}, {2,7}, {9,-2} };
	
	// por defecto (menor en first & second)
	//sort(all(vc));
	
	// sort especifico (lambda, funcion)
	sort(all(vc), [](const ii p1, const ii p2){
		// return p1 > p2; reverse
		return p1.f > p2.f and p1.s < p2.s; //mayor en first, menor en second
	});
	
	// imprimir vector de pairs
	for(const auto& p: vc){
		cout << p.f << " : " << p.s << ENDL;
	}
	
	
	
	return 0;
}
