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

// Criba que saca la suma de los divisores de un numero n.
// En el ejemplo pide varios numeros y del más grande construye la criba, y solo consulta
// el número n del cual se quiere saber la suma de sus divisores. (Nota: el mismo numero en este caso se
// le quito en la suma de divisores)

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
