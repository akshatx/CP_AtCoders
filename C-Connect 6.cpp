#include <bits/stdc++.h>
#define ll long long
#define cp() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
 
using namespace std;
 
 
int main()
{
    cp();
    int n;
    cin>>n;
    char a[n][n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin>>a[i][j];
        }
 
    }
    bool flag=1;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n-5; ++j)
        {
            int h=0;
            if(a[i][j]=='#'){
                h++;
            }
            if(a[i][j+1]=='#'){
                h++;
            }
            if(a[i][j+2]=='#'){
                h++;
            }
            if(a[i][j+3]=='#'){
                h++;
            }
            if(a[i][j+4]=='#'){
                h++;
            }
            if(a[i][j+5]=='#'){
                h++;
            }
            if(h>=4){
                flag=0;
                cout<<"Yes";
                break;
            }
        }
        if(flag==0){
            break;
        }
    }
 
    for (int i = 0; i < n-5; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int h=0;
            if(a[i][j]=='#'){
                h++;
            }
            if(a[i+1][j]=='#'){
                h++;
            }
            if(a[i+2][j]=='#'){
                h++;
            }
            if(a[i+3][j]=='#'){
                h++;
            }
            if(a[i+4][j]=='#'){
                h++;
            }
            if(a[i+5][j]=='#'){
                h++;
            }
            if(h>=4 && flag==1){
                flag=0;
                cout<<"Yes";
                break;
            }
        }
        if(flag==0){
            break;
        }
    }
 
 
    for (int i = 0; i < n-5; ++i)
    {
        for (int j = 0; j < n-5; ++j)
        {
            int h=0;
            if(a[i][j]=='#'){
                h++;
            }
            if(a[i+1][j+1]=='#'){
                h++;
            }
            if(a[i+2][j+2]=='#'){
                h++;
            }
            if(a[i+3][j+3]=='#'){
                h++;
            }
            if(a[i+4][j+4]=='#'){
                h++;
            }
            if(a[i+5][j+5]=='#'){
                h++;
            }
            if(h>=4 && flag==1){
                flag=0;
                cout<<"Yes";
                break;
            }
        }
        if(flag==0){
            break;
        }
    }
 
 
    for (int i = 0; i < n-5; ++i)
    {
        for (int j = 5; j <=n-1; ++j)
        {
            int h=0;
            if(a[i][j]=='#'){
                h++;
            }
            if(a[i+1][j-1]=='#'){
                h++;
            }
            if(a[i+2][j-2]=='#'){
                h++;
            }
            if(a[i+3][j-3]=='#'){
                h++;
            }
            if(a[i+4][j-4]=='#'){
                h++;
            }
            if(a[i+5][j-5]=='#'){
                h++;
            }
            if(h>=4 && flag==1){
                flag=0;
                cout<<"Yes";
                break;
            }
        }
        if(flag==0){
            break;
        }
    }
 
 
    if(flag==1){
        cout<<"No";
    }
    return 0;
}
