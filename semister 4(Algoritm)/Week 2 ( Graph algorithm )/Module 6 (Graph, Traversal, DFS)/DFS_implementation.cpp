#include<bits/stdc++.h>
using namespace std;

const int N=1e6+5;
vector<int>adj[N];
bool visited[N];

void dfs(int u)
{    visited[u]=true;
    cout<< " visiting node " << " : " << u <<endl;
    //section 1: actions just after entering a node u;
    for (int v: adj[u])
    {   
        //section 2: actions before entering a new neighbor;
        if (visited[v] == true)continue;
        dfs(v);
        //section 3: actions after exiting a neighbor;
    }
    //section 4: actions before exiting node u ;
}
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    /*for(int i=1; i<=n; i++)
    {
        cout<< " node " << i <<" : ";
        for(int j: adj[i])
        {
            cout<< j <<" ";
        }
        cout<< endl;
    }*/
    dfs(1);
    cout << "visiting array\n";
    for(int i=1; i<=n; i++)
    {
       cout<< "node" << i << "status:" << visited[i]<<endl;
    }

return 0;
}