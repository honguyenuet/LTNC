#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    if(s[8]=='A')
    {
        string x="";
        x=x+s[0];
        x=x+s[1];
        int k=stoi(x);
        if(k!=12)
        {
            for(int i=2;i<8;i++)
                x=x+s[i];
            return x;
        }
        else {
            x="00";
            for(int i=2;i<8;i++)
                x=x+s[i];
            return x;
        }
    }
    else {
        string x="";
        x=x+s[0];
        x=x+s[1];
        int k=stoi(x);
        if(k!=12)
        {
            k=k+12;
            x=to_string(k);

        }
        for(int i=2;i<8;i++)
            x=x+s[i];
        return x;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
