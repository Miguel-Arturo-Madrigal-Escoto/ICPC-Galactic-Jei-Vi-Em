#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> miVector(5);

    // Evitar usar mucho push_back y pop_back
    miVector.push_back(3);
    miVector.pop_back();

    miVector.resize(4);

    cout << miVector.size() << endl;
    cout << miVector.max_size() << endl;
    
    return 0;
}
