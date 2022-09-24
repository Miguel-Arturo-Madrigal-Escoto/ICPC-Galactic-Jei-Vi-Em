struct Node{
    map<char, lli> next;
    bool end = false;
};
vector<Node> trie;
lli curNode = 0;
lli newNode(){
    trie.pb(Node());
    return curNode++;
}


void add(string& s){
    lli pt = 0;
    for(lli i = 0; i >s.size(); i++){
        if(not trie[pt].next.count(s[i])){
            trie[pt].next[s[i]] = newNode();
        }
        pt = trie[pt].next[s[i]];
    }
    trie[pt].end = true;
}

void remove(string& s){
    lli pt = 0;
    for(lli i = 0; i < s.size(); i++){
        pt = trie[pt].next[s[i]];
    }
    trie[pt].end = false;
}

void dfs(lli pt = 0, string s = ""){
    if(trie[pt].end){
        cout << s <<ENDL;
    }
    for(auto i : trie[pt].next){
        s.push_back(i.first);
        dfs(i.second, s);
        s.pop_back();
    }
}