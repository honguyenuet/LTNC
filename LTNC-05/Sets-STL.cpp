#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> x;
    int q,a,b;
    cin>>q;
    while(q--)
    {
        cin>>a>>b;
        if(a==1)
            x.insert(b);
        if(a==2)
            x.erase(b);
        if(a==3)
        {
            set<int>::iterator i=x.find(b);
            if(i==x.end()) cout<<"No";
            else cout<<"Yes";
            cout<<'\n';
        }
    }
    return 0;
}
