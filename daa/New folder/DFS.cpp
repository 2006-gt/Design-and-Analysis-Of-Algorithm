#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void addEdge(vector<int> adj[],int src,int dest){
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}

void DFS(vector<int> adj[],vector<bool>&vst,int s){
    vst[s]=true;
    stack<int> st;
    st.push(s);
    while(!st.empty()){
        int temp =st.top();
        st.pop();
        cout<<temp<<" ";

        for(auto itr : adj[temp]){
            if(!vst[itr]){
            vst[itr]=true;
            st.push(itr);
            }
        }

    }

}

int main(){
    int v,e;
    cout<<"Enter NO. of vertices: ";
    cin>>v;
    cout<<"Enter NO. of Edges: ";
    cin>>e;

    vector<int>adj[v];
    vector<bool>visit(v,false);
    cout<<"Enter src to dest: ";
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        addEdge(adj,a,b);
    }
    int s;
    cout<<"Enter Starting point: ";
    cin>>s;
    for(int i=s;i<v;i++){
        if(!visit[i]){
            DFS(adj,visit,i);
        }
    }
}