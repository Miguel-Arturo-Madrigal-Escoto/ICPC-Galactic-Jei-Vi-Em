
#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fore(i,a,b) for(int i = a, T = b; i < T; ++i)
#define sz(s) int(s.size())
#define pb push_back
#define pba pop_back
#define all(s) begin(s),end(s)
#define ENDL '\n'

using namespace std;

///types
typedef long double ld;
typedef long long lli;
typedef pair<lli,lli> ii;
typedef vector<lli> vi;


// DFS <-> BFS (Both)

/// vector<vi> graph;
map<lli,vi> graph;
/// vector<bool> visited;
map<lli,bool> visited;

// DFS

void dfs(lli currNode){
	cout << "visiting: " << currNode << ENDL;
	visited[currNode] = true;
	
	for(auto node: graph[currNode]){
		if(!visited[node]){
			dfs(node);
		}
	}
	
}

// BFS
queue<lli> bfsQueue;

void bfs(lli startNode){
	cout << "visiting: " << startNode << ENDL;
	visited[startNode] = true;
	bfsQueue.push(startNode);
	
	while(!bfsQueue.empty()){
		lli currNode = bfsQueue.front();
		bfsQueue.pop();
		
		for(auto node: graph[currNode]){
			if(!visited[node]){
				cout << "visiting: " << node << ENDL;
				visited[node] = true;
				bfsQueue.push(node);
			}
		}
	}
}


int main(){
	lli nodes, edges, nodeA, nodeB;
	cin>>nodes>>edges;
	
	// resize visited && graph
	/// we can also use a map to prevent index out of bounds exception
	//graph.resize(nodes+1); 
	//visited.resize(nodes+1);
	
	fore(i,0,edges){
		cin>>nodeA>>nodeB;
		graph[nodeA].pb(nodeB);
		graph[nodeB].pb(nodeA);
	}
	
	//dfs(1); -> dfs(startNode)
	
	//bfs(1); -> bfs(startNode)
	
	
    return 0;
}
