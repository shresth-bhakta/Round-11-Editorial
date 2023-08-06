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
 
int32_t main()
{
    int n,q; cin>>n>>q;
    vector<int> ip;

    for(int i = 0; i < n; i++){
        int x; cin>>x;
        ip.push_back(x);
    }

    sort(ip.begin(), ip.end());

    while(q--){
        int l,r; cin>>l>>r;
        int left = lower_bound(ip.begin(), ip.end(), l) - ip.begin();
        int right = upper_bound(ip.begin(), ip.end(), r) - ip.begin();
        
        cout << right - left << endl;
    }

}


