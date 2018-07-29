#include<iostream>
#include<vector>
using namespace std;

//visited initialization with 0
vector<bool>visited;
void initialize(int nodes)
{
    int i;
    for(i=0; i<=nodes; i++)
        visited.push_back(false);
}

//DFS Function
void dfs(int s , vector< vector<int> > &adj)
{
    int i;
    visited[s]=true;
    for(i=0; i<adj[s].size(); i++)
    {
        if( visited[ adj[s][i] ]==false)
            dfs(adj[s][i],adj);
    }
}
int main()
{
    int nodes, edges, x, y;
    int i, component=0;

    cin>>nodes>>edges;
    vector< vector<int> > adj(nodes+1);
    for(i=0; i<edges; i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    initialize(nodes);
    for(i=1; i<=nodes; i++)
    {
        if(visited[i]==false)
        {
           dfs(i,adj);
            component++;
        }
    }
    cout<<component<<endl;
    return 0;
}
