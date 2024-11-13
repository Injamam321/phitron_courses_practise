#include<bits/stdc++.h>
using namespace std;
 class male
 {
    public:
        string name;
        int age;
        int marks1;
        int marks2;
        male(string nm,int ag,int m1,int m2)
        {
            name=nm;
            age=ag;
            marks1=m1;
            marks2=m2;
        }
        void hello()
        {
            cout<<"hello"<<endl;
            cout<<name<<" "<<age<<endl;
        }
        int total_marks()
        {
            return marks1+marks2;
        }
 };
 int main()
{
    male imu("injamam hossain", 23,80,85);
    //cout<<imu.name<<" "<<imu.age<<endl;
    //imu.hello();
    cout<<imu.total_marks()<<endl;
 
    return 0;
}