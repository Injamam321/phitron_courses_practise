#include<bits/stdc++.h>
using namespace std;
int main()
{   
    
    vector<int> v={100,200,300,400};
    list<int>mylist(v.begin(),v.end());

    //int a[5]={10,20,30,40,50};
    //list<int>mylist(a,a+5);

    //list<int> list1={1,2,3,4,5};
    //list<int>mylist(list1);
    
    //list <int> mylist(10,5);
    //cout<<mylist.front();

    /* for(auto it=mylist.begin(); it != mylist.end(); it++)
    {
        cout<<*it<<endl;
    } */
    for(int val: mylist)
    {
        cout<<val<<endl;
    }

    return 0;
}