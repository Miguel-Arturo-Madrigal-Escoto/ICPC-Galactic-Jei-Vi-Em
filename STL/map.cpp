#include <bits/stdc++.h>

using namespace std;

int main(){
    map<string,int> miMap;

    miMap["Mapa"] = 1;
    miMap["Mapa2"] = 2;

    cout << miMap["Mapa"] << endl;
    miMap.erase(0);
    cout << miMap.size() << endl;
    cout << miMap.count("Mapa2") << endl;

    for (auto iter = miMap.begin(); iter != miMap.end(); ++iter){
        cout << "[" << iter->first << ","
                    << iter->second << "]\n";
    }
    
    return 0;
}
