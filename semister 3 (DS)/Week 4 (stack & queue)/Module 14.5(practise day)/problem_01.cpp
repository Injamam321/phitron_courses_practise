#include<bits/stdc++.h>
using namespace std;

bool St_Equal(stack<int> &st1, stack<int> &st2) 
{
    if (st1.size() != st2.size()) 
    {
        return false;
    }

    while (!st1.empty() && !st2.empty()) 
    {
        if (st1.top() != st2.top()) 
        {
            return false;
        }
        st1.pop();
        st2.pop();
    }

    return true;
}

int main() 
{
    int N, M;
    cin >> N;
    stack<int> st1;
    for (int i = 0; i < N; i++) 
    {
        int num;
        cin >> num;
        st1.push(num);
    }

    cin >> M;
    stack<int> st2;
    for (int i = 0; i < M; i++)
     {
        int num;
        cin >> num;
        st2.push(num);
    }

    if (St_Equal(st1, st2)) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}
