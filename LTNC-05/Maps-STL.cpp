#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
int n,a,b;
string s;
map<string,int>m;

int main() {
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a==1)
        {
            cin>>s>>b;
            m[s]+=b;
        }
        if(a==2)
        {
            cin>>s;
            m.erase(s);
        }
        if(a==3)
        {
            cin>>s;
            map<string,int>::iterator i=m.find(s);
            if(i==m.end()) cout<<0;
            else cout<<m[s];
            cout<<'\n';
        }
    }
    return 0;
}



