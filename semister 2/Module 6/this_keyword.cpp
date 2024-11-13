#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        string name;
        int age;
        person(string name,int age)
        {
            (*this).name=name;
            //this->name=name;
            (*this).age=age;
            //this->age=age;
        }
};
int main()
{
  person imu("imjamam",23);
  cout<<imu.name<<" "<<imu.age<<endl;
    return 0;
}