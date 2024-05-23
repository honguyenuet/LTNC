#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n,k;
vector<int> v;
int main() {
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        v.push_back(k);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int t;
        cin>>t;
        vector<int>::iterator k=lower_bound(v.begin(),v.end(),t);
        if(*k==t) cout<<"Yes "<<k-v.begin()+1;
        else cout<<"No "<<k-v.begin()+1;
        cout<<'\n';
    }
    return 0;
}
