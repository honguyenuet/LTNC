#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long n,k;
    vector<long long>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        v.push_back(k);
    }
    int m;
    cin>>m;
    v.erase(v.begin()+m-1);
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+a-1,v.begin()+b-1);
    int q=v.size();
    cout<<q<<'\n';
    for(int i=0;i<q;i++)
        cout<<v[i]<<" ";
    return 0;
}
