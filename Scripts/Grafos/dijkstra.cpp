vi dijkstra(int inicio, int nodos){
    vi dist(nodos, -1);
    dist[inicio] = 0;
    priority_queue<ii, vector<ii>, greater<ii>> pq;
    pq.push({0, inicio});
    while(!pq.empty()) {
        ii cur = pq.top();
        pq.pop();
        if(dist[cur.s] != cur.f) continue;
        for(auto edge : graph[cur.s]){
            lli nwDist = edge.s + cur.f;
            if(dist[edge.f] == -1 or nwDist < dist[edge.f]) {
                dist[edge.f] = nwDist;
                pq.push({nwDist, edge.f});
            }
        }
    }
    return dist;
}