//Shresth's Template
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define pii pair<int,int>
#define pb push_back
#define ff first
#define ss second
#define fr0 for(int i=0; i<n; i++)
#define fr1 for(int i=1; i<=n; i++)
 
using namespace std;

void dfs(int node, vector<int>& vis, vector<int> g[]){
    vis[node] = 1;

    for(auto child : g[node]){
        if(!vis[child]) dfs(child, vis, g);
    }

    return;
}
 
int32_t main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> g[n];
        vector<int> vis(n,0);

        int e; cin>>e;
        while(e--){
            int u,v; cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        int cc = 0;    // connected components count

        for(int i = 0; i < n; i++){
            if(!vis[i]){
                dfs(i, vis, g);
                cc++;
            }
        }

        cout << cc << endl;

    }
}
