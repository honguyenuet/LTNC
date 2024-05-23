#include <bits/stdc++.h>

using namespace std;
int a[9][9],maxa=-63;
int main()
{
    for(int i=0;i<=5;i++)
        for(int j=0;j<=5;j++)
            cin>>a[i][j];
    for(int i=0;i<=3;i++)
        for(int j=0;j<=3;j++)
            maxa=max(maxa,a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2]);
    cout<<maxa;
}
