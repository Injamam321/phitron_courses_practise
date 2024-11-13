#include <bits/stdc++.h>
using namespace std;
bool containsRatul(const string& input) 
{
    istringstream iss(input);
    string word;
    while (iss >> word) 
    {
        if (word == "Ratul") 
        {
            return true;
        }
    }
    return false;
}

int main() 
{
    string input;
    getline(cin, input);
    if (containsRatul(input)) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }
    return 0;
}
//find ratul another way 

/*#include <bits/stdc++.h>
using namespace std;

bool containsRatul(const string & input) 
{
    istringstream ss(input);
    string word;
    while (ss >> word)
    {
        if (word == "Ratul") 
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string input;
    getline(cin, input);
    if (containsRatul(input)) 
    {
        cout << "YES" << endl;
    } 
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
*/