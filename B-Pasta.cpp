#include <bits/stdc++.h>
#define ll long long
#define cp() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
 
using namespace std;
 
 
int main()
{
    cp();
    ll n,m;
    cin>>n>>m;
    vector<ll>vn(n);
    for (ll i = 0; i < n; ++i)
    {
        cin>>vn[i];
    }
    ll c=0;
    vector<ll>vm(m);
    for (ll i = 0; i < m; ++i)
    {
        cin>>vm[i];
        for (ll j = 0; j < vn.size(); ++j)
        {
            if(vm[i]==vn[j]){
                c++;
                vn[j]=-1;
                break;
 
            }
        }
    }
    if(c==m){
        cout<<"Yes";
 
    }
    else{
        cout<<"No";
    }
 
    return 0;
}
