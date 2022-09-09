#include <iostream>
#include<vector>
#include<queue>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

bool isCyclicConntected(vector<int> adj[], int s,int V, vector<bool>& visited)
{
	vector<int> parent(V, -1);
	queue<int> q;
	visited[s] = true;
	q.push(s);
	while (!q.empty()) 
   {
		int u = q.front();
		q.pop();
		for (auto v : adj[u])
       {
			if (!visited[v])
         {
				visited[v] = true;
				q.push(v);
				parent[v] = u;
			}
			else if (parent[u] != v)
				return true;
		}
	}
	return false;
}
bool isCyclicDisconntected(vector<int> adj[], int V)
{
	vector<bool> visited(V, false);

	for (int i = 0; i < V; i++)
   {
		if (!visited[i] && isCyclicConntected(adj, i,V, visited))
      {
         	return true;
      }
	}	
	return false;
}
int main()
{
	int v,e;
   cout<<"Enter number of vertices : ";
   cin>>v;
   cout<<"Enter number of edges : ";
   cin>>e;
	vector<int> adj[v];
   cout<<"Enter edges : "<<endl;
   int x,y;
   for(int i=0;i<e;i++)
   {
   cout<<"From  : ";
   cin>>x;
   cout<<"to : ";
   cin>>y;
   addEdge(adj,x,y);
   }

	if (isCyclicDisconntected(adj, v))
		cout << "Yes Cycle Exist" <<endl;
	else
		cout << "No Cycle Not Exist"<<endl;

	return 0;
}