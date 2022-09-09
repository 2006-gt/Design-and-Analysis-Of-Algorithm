#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void add_edge(int src, int dst, vector<int>adj[]){
    adj[src].push_back(dst);
    adj[dst].push_back(src);
}

bool bfs(vector<int>adj[], int s, vector<bool>&visit,int n){
    queue<int>q;
    visit[s]=true;
    vector<int>level(n);
    level[s]=0;
    q.push(s);
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        //cout<<temp;
        for(auto itr : adj[temp]){
            if(!visit[itr]){
                visit[itr]=true;
                level[itr]=level[temp]+1;
                q.push(itr);
            }
            else if (level[temp]==level[itr])
            {
                return false;
            }
            
        }
    }
    return true;
}
int main(){
    cout<<"enter no. of verices: ";
    int v, e, src, dst;
    cin>>v;
    cout<<"enter no. of edges: ";
    cin>>e;
    vector<int>adj[v];
    vector<bool>visited(v, false);
    cout<<"enter edges";
    for(int i =0; i<e; i++){
        cin>>src>>dst;
        add_edge(src, dst, adj);
    }  
    bool biPartite=bfs(adj, 0, visited,v);   
    if(biPartite)
    cout<<"Graph is bipartite";
    else 
    cout<<"Graph is not bipartite";

    return 0;
}