#include <bits/stdc++.h>
using namespace std;

int main() 
{
    list<int> linked_List;
    int val;

    while (true) 
    {
        cin >> val;
        if (val == -1) 
        {
            break;
        }
        linked_List.push_back(val);
    }

    unordered_set<int> special_set;
    
    for (int num : linked_List) 
    {
        if (special_set.find(num) == special_set.end()) 
        {
            special_set.insert(num);
        }
    }

    list<int> uniqueList(special_set.begin(), special_set.end());
    uniqueList.sort();

    for (int num : uniqueList) 
    {
        cout << num << " ";
    }

    return 0;
}
