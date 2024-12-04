#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist={10,20,30,40};
    //list<int> newlist={100,200,300,600};
    //mylist.insert(next(mylist.begin(),2),newlist.begin(),newlist.end());


    // mylist.erase(next(mylist.begin(),3));
    //mylist.insert(next(mylist.begin(),2),{300,400,500});
    
    //mylist.pop_front();
    //mylist.pop_back();

    //mylist.push_front(100);
    //mylist.push_back(200);

    //list<int> newlist;
    //newlist=mylist
    //newlist.assign(mylist.begin(),mylist.end());
    
   /* for(int val: mylist)
    {
        cout<<val<<endl;
    } */ 
    auto it =find(mylist.begin(),mylist.end(),100);
    if(it==mylist.end())
    {
        cout<<"not found";
    }
    else
    {
        cout<<"found";
    }
    return 0;
}