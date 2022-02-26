#include <bits/stdc++.h>
#define ll long long
#define cp() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
 
using namespace std;
 
 
int main()
{
    cp();
    int a[10];
    for (int i = 0; i < 10; ++i)
    {
        cin>>a[i];
    }
    int x=a[0];
    int n=x;
    for (int i = 0; i < 2; ++i)
    {
        x=a[n];
        n=x;
    }
    cout<<x;
 
    return 0;
}
