int main(){
    lli nodos, aristas, a, b; cin >> nodos >> aristas;
    vector<vi> graph(nodos);
    fore(i, 0, aristas){
        cin >> a >> b;
        graph[a].pb(b);
        graph[b].pb(a);
    }
    return 0;
}


int main{
    lli nodos, aristas, a, b; cin >> nodos >> aristas;
    vector<vector<ii>> graph(nodos);
    fore(i, 0, aristas){
        cin >> a >> b;
        graph[a].pb({b, c});
        graph[b].pb({a, c});
    }
    return 0;
}