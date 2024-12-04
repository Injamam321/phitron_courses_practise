#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist = {10,20,30,40};
    //mylist.resize(2);
    //mylist.resize(5,200);
    //mylist.clear();
    
    //cout<<mylist.max_size();

    cout<<mylist.size()<<endl; 

    for(int val: mylist)
    {
        cout<<val<<endl;
    }
    return 0; 
}