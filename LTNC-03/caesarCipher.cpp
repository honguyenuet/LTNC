#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

string caesarCipher(string s, int k) {
    string x;
    int l=s.size();
    k=k%26;
    for(int i=0;i<l;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            if(s[i]+k>'z')
                x=x+char(k-(122-s[i])+96);
            else
                x=x+char(s[i]+k);
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            if(s[i]+k>'Z')
                x=x+char(k-(90-s[i])+64);
            else
                x=x+char(s[i]+k);
        }
        else
            x=x+s[i];
    }
    return x;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string s;
    getline(cin, s);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
