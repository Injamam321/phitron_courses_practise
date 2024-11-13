#include<bits/stdc++.h>
using namespace std;
class student 
{
    public:
            string name;
            int roll;
            int marks;

};
bool cmp(student a, student b )
{
    if(a.marks<b.marks) return true;
    else return false;

}

int main()
{
  student a[3];
  for (int i = 0; i < 3; i++)
  {
    getline(cin,a[i].name);
    cin>>a[i].roll>>a[i].marks;
    cin.ignore();
  }
//sort function
sort(a,a+3,cmp);
  for (int i = 0; i < 3; i++)
  {
    cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
  }
 return 0;
}
/*#include <iostream>
#include <string>
#include <algorithm>

class student 
{
public:
    std::string name;
    int roll;
    int marks;
};

bool cmp(student a, student b)
{
    return a.marks < b.marks;
}

int main()
{
    student a[3];
    for (int i = 0; i < 3; i++)
    {
        std::cin.ignore();
        std::getline(std::cin, a[i].name);
        std::cin >> a[i].roll >> a[i].marks;
        std::cin.ignore();
    }
    
    std::sort(a, a + 3, cmp);
    
    for (int i = 0; i < 3; i++)
    {
        std::cout << a[i].name << " " << a[i].roll << " " << a[i].marks << std::endl;
    }
    
    return 0;
}*/
