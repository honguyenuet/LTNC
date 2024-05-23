
#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin>>a>>b;
    int c=a.size();
    int d=b.size();
    cout<<c<<" "<<d<<'\n';
    cout<<a<<b<<'\n';
    cout<<b[0];
    for(int i=1;i<c;i++)
        cout<<a[i];
    cout<<" "<<a[0];
    for(int i=1;i<d;i++)
        cout<<b[i];
    return 0;
}
