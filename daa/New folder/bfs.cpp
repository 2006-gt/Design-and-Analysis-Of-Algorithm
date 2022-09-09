#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void add_edge(int src, int dst, vector<int>adj[]){
    adj[src].push_back(dst);
    adj[dst].push_back(src);
}

void bfs(vector<int>adj[], int s, vector<bool>&visit,int n){
    queue<int>q;
    visit[s]=true;

    q.push(s);
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        cout<<temp;
        for(auto itr : adj[temp]){
            if(!visit[itr]){
                visit[itr]=true;
                q.push(itr);
            }

            
        }

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

    for(int i=0;i<v;i++)
    bfs(adj,0,visited);
    return 0;
}