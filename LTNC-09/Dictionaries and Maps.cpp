#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int n;
map<string,string>m;
string s,x;

int main() {
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s>>x;
        m[s]=x;
    }
    string a;
    while(cin>>a)
    {
        if(m[a]!="")
            cout<<a<<"="<<m[a]<<'\n';
        else cout<<"Not found"<<'\n';
    }
    return 0;
}
