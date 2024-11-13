#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        string name;
        int age;
        person(string name, int age)
        {
            this->name=name;
            this->age=age;
        }
};
int main()
{
    person*imu=new person("imjamam",23);
    person*afrin=new person("bithy",22);
    *imu=*afrin;
    //imu=afrin;
    //imu->name=afrin->name;
    //imu->age=afrin->age; 
    delete afrin;
    cout<<imu->name<<" "<<imu->age<<endl;
    return 0;
}