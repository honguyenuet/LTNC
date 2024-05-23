#include <bits/stdc++.h>

using namespace std;

int n,dem=1,maxd=-1;
string tobin(int n)
{
    string s="";
    while(n>0)
    {
        s=s+char(n%2);
        n/=2;
    }
    return s;
}
int main()
{
    cin>>n;
    string s=tobin(n);
    int k=s.size();
    for(int i=1;i<k;i++)
    {
        if(s[i]==s[i-1]) dem++;
        else
        {
            maxd=max(maxd,dem);
            dem=1;
        }
    }
    maxd=max(maxd,dem);
    cout<<maxd;
}
