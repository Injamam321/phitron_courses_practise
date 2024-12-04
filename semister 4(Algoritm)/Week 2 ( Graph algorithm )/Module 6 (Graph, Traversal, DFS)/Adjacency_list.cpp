#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
vector <int> adjlist[N];

int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=0; i<=n; i++)
  {
    int u,v;
    cin>>u>>v;

    adjlist[u].push_back(v); //directed list 
    //adjlist[v].push_back(u); //undirected list 

  }

for(int i=1; i<=n; i++)
{
    cout<< " list " << i << " : ";
    for(int j: adjlist[i])
    {
        cout<<j<<" ";
    }
    cout<<endl;
}
  
  
  return 0;
}