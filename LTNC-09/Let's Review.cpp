#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin>>T;
    while(T--)
    {
        string s,a,b;
        cin>>s;
        int l=s.size();
        for(int i=0;i<l;i++)
        {
            if(i%2==0) a=a+s[i];
            else b=b+s[i];
        }
        cout<<a<<" "<<b;
        cout<<'\n';
    }
    return 0;
}
