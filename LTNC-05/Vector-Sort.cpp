#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
    return 0;
}

