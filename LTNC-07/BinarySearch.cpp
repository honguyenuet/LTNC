#include<bits/stdc++.h>
using namespace std;
int n,a[10000],x;
int binaryS(int a[],int x,int l,int r)
{
    if(l<=r)
    {
        int m=(l+r)/2;
        if(a[m]==x) return m;
        if(a[m]>x) return binaryS(a,x,l,m-1);
        return binaryS(a,x,m+1,r);
    }
    return -1;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
    cout<<binaryS(a,x,1,n);
}
