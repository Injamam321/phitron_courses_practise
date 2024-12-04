#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    //sorting apply boro to choto

    sort(a,a+n,greater<int>());
    //sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}