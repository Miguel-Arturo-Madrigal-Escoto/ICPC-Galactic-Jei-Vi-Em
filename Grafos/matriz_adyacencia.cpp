int main(){
    lli nodos, aristas, a, b; cin >> nodos >> aristas;
    vector<vector<bool>> matrizAdyacencia(nodos, vector<bool>(nodos));
    fore(i, 0, aristas) {
        cin >> a >> b;
        matrizAdyacencia[a][b] = matrizAdyacencia[b][a] = true;
    }
    return 0;
}