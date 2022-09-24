#include <vector>
#include <utility>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
#include <map>
#include <set>
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

int main()
{   
    map<char,bool> exists; // vector de existencia
    map<char,int> counter; // cantidad de ocurrencias
    string str = "", dist_str = "";
    int n; 
    char c;
    cin>>n; cin.ignore();

	// para la técnica de ventanas se ocupan dos maps, uno de si existe y otro de cuantas
	// veces existe
	
	// ej: busca la cadena/longitud de la minima cadena que contenga AHD entre AQNQKAHHDAUQYAAAHFD


    // mayus
    fore(i,65,91){
        exists[(char)i] = false;
        counter[(char)i] = 0;
    }

    // minus
    fore(i,97,123){
        exists[(char)i] = false;
        counter[(char)i] = 0;
    }


    fore(j,0,n){
        cin>>c;
        str+=c; // cad
        if(!exists[c]){
			// si esta marcado como que el caracter
            exists[c] = true;  // marcar que existe
            dist_str+=c; // agregar el caracter leido a la string de los caracteres distintos: ej: AUQ
        }
    }
    
    // cnt: contador de caracteres unicos
    // left_p: puntero izquierdo
    // min_flats: longitud minima de la ventana (se pone un valor muy alto para que se vaya achicando)
    // start_p: es el indice / puntero de donde va a comenzar el resultado de s.substr del resultado
    
    
    // el resultado es la substring del start_p hasta la longitud minima de la ventana s.substr(start_p, min_window)
    int cnt = 0, left_p = 0, min_flats = 100001, start_p = -1;

    fore(i,0,sz(str)){
        counter[str[i]]++; //ocurrencias str[i] en el map

        if(counter[str[i]] == 1) cnt++; // primer ocurrencia del caracter str[i]

        // si se encontraron los caracteres buscados
        if (cnt == sz(dist_str)){
            // acortar la ventana mientras haya mas de 1 elemento repetido
            while(counter[str[left_p]]>1){
                counter[str[left_p]]--;
                left_p++;
            }
            
            // longitud minima de la ventana actual

            int curr_flats = i - left_p + 1;
            if(curr_flats < min_flats){
				// actualizar el minimo la longitud min de la ventana
                min_flats = curr_flats;
                start_p = left_p; // mover el puntero de inicio
            }
        }
    }

    cout << sz(str.substr(start_p, min_flats)) << ENDL;
  
    return 0;
}
