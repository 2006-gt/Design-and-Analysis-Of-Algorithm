#include<bits/stdc++.h>
using namespace std;


// void addEdge(int a,int b,vector<vector<int>> &adj){
//     adj[a].push_back(b);
//     adj[b].push_back(a);
// }

bool isCycle(int src, vector<vector<int>> &adj,vector<bool> &visited,int parent){
    visited[src]=true;
    for(auto i: adj[src]){
        if(i!=parent){
        if(visited[i])
        return true;
        if(!visited[i] && isCycle(i, adj, visited, src))
        return true;
        }
    }
    return false;
}

int main(){
    int v,e;
    cout<<"Enter no. of edges: ";
    cin>>e;

    cout<<"Enter no. of vertices : ";
    cin>>v;
    vector<vector<int>> adj(v);
    vector<bool> visited(v,false);
    cout<<"Give edges: from -> to "<<endl;

    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        // addEdge(a,b,adj);
    }

    bool cycle=false;

    for(int i=0;i<v;i++){
        if(!visited[i] && isCycle(i,adj,visited,-1)){
            cycle = true;
        }
    }
    if(cycle)cout<<"cycle present"<<endl;
    else cout<<"cycle not present";
}