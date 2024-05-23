#include <bits/stdc++.h>

using namespace std;

int camelcase(string s) {
    int k=s.size();
    int dem=0;
    for(int i=0;i<k;i++)
    {
        if('A'<=s[i] && s[i]<='Z') dem++;
    }
    return dem+1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
