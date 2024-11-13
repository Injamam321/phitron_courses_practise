#include<bits/stdc++.h>
using namespace std;

string replaceString(string str, string target) 
{
    string result;
    int targetLen = target.length();
    int pos;

    while ((pos = str.find(target)) != string::npos)
    {
        result += str.substr(0, pos);
        result += "$";
        str.erase(0, pos + targetLen);
    }

    result += str;
    return result;
}

int main() 
{
    int T;
    cin >> T;

    while (T--)
    {
        string S, X;
        cin >> S >> X;
        string modifiedS = replaceString(S, X);
        cout << modifiedS << endl;
    }

    return 0;
}
