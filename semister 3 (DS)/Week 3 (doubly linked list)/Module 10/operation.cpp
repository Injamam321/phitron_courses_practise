#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist={20,19,20,30,30,40,20,30,23,12};

    //mylist.sort(greater<int>());
    //mylist.sort();
    //mylist.remove(30);

     //mylist.unique();
     mylist.reverse();
    for(int val: mylist)
    {
        cout<<val<<endl;
    }
    return 0;
}