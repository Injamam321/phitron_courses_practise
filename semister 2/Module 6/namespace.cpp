#include<bits/stdc++.h>
using namespace std;
namespace imu
{
    int age=23;
    void hello()
        {
            cout<<"imjamam namespace"<<endl;
        }
    
}
namespace lamiya
{
    int age2=21;
    void hello2()
    {
        cout<<"lamiya namespaces"<<endl;
    }
}
using namespace imu;
using namespace lamiya;
int main()
{
  cout<<age<<endl;
  cout<<age2<<endl;
    return 0;
}