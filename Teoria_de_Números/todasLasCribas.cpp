#include <iostream>
#include <vector>
#include <set>

using namespace std;

typedef long long lli;
typedef vector<lli> vi;


// CRIBA DE LOS NUMEROS PRIMOS HASTA UN NUMERO N.
// Devuelve una lista con los números primos.

vi makeCriba(int n) {
    vector<bool> criba(n,true);
    criba[0] = criba[1] = false;
    for(int i=2;i*i<n;i++){
        if(!criba[i]) continue;
        for(int j = i * i;j<n;j+=i){
            criba[j] =false;
        }
    }
    vi primes;
    for(int s=2;s<n;s++){
        if(criba[s])
            primes.push_back(s);
    }
    return primes;
}

// Criba para la descomposición de un número. Ej 30 -> 5² + 5¹

set<int> descomp(int x,vi primes){
    set<int> representacion;
    for(auto pr: primes) {
        while((x%pr)==0){
            x/= pr;
            representacion.insert(pr);
        }
    }
    if(x>1) representacion.insert(x);
    return representacion;
}

void primos(){
    int n2;
    cin>>n2;
    vi primes=makeCriba(n2);
    set<int> prim = descomp(n2,primes);
    resp+="Case "+to_string(band)+": ";
    for(auto it = prim.begin();it!=prim.end();it++){
        resp+= to_string(*it) +" ";
    }
    resp+='\n';
    band++;
}

int main(){
    int n;
    cin>>n;
    cin.ignore();

    for(int i=0;i<n;i++){
        primos();
    }
    cout << resp;

    return 0;
}


#include <iostream>
#include <vector>
#include <set>

using namespace std;

typedef long long lli;
typedef vector<lli> vi;

// CRIBA DE LOS NUMEROS PRIMOS HASTA UN NUMERO N (más optimizada)
// Devuelve una lista con los números primos.


vi makeCriba(int n) {
    vector<bool> criba(n,true);
    criba[0] = criba[1] = false;
    for(int i=2;i*i<n;i++){
        if(!criba[i]) continue;
        for(int j = i * i;j<n;j+=i){
            criba[j] =false;
        }
    }
    vi primes;
    for(int s=2;s<n;s++){
        if(criba[s] && n%s==0){
            primes.push_back(s);
            //cout << s <<endl;
        }
    }
    cout<<"---"<<endl;
    return primes;
}

int main(){
    int n, band=0;
    vi primes;
    cin>>n;
    cin.ignore();
    for(int i=2;i<=n;i++){
        //cout<<"es el "<<i<<endl;
        primes=makeCriba(i);
        if(primes.size()==2){
            //cout << primes.size()<<endl;
            band++;;
        }
    }

    cout << band;

    return 0;
}

// Criba de mayor divisor

void makeCriba(int n) {
    vi criba(n);
    fore(i,0,n) criba[i] = i;
    
    for(int i = 2; i * i < n; ++i){
		if(criba[i] != i) continue;
		for(int j = i * 2; j < n; j+=i){
			criba[j] = i;
		}
	}
}

// Criba de número de divisores

void makeCriba(int n) {
    vi criba(n, 2);
    criba[0] = 0;
    criba[1] = 1;
    
    for(int i = 2; i < n; ++i){
		for(int j = i*2; j < n; j+=i){
			++criba[j];
		}
	}
}




int main(){
    int n;
    vi criba;
    cin>>n;
    cin.ignore();

    for(int i=0;i<n;i++){
        divisores();
    }
    for(int i=0;i<n;i++){
        cout<<criba[i];
    }

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;
typedef long long lli;
typedef vector<lli> vi;
vi criba;

// Criba de suma de divisores

void makeCriba(int n) {
    criba.resize(n,1);
    criba[0]=0;
    for(int i=2;i<n;i++){
        for(int j = i;j<n;j+=i){
            criba[j] +=i;
        }
    }
}

int main(){
    int n,num,nm=0;
    vi cr;
    cin>>n;
    cin.ignore();

    for(int i=0;i<n;i++){
        cin >> num;
        if(num>nm)
            nm=num;
        cr.push_back(num);
    }
    makeCriba(nm+1);
    for(int j=0;j<cr.size();j++){
        cout << criba[cr[j]] -cr[j]<< endl;
    }

    return 0;
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
