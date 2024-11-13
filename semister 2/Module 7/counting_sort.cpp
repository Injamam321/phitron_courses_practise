#include<bits/stdc++.h>
using namespace std;
/*class student 
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

}*/

int main()
{
  int n;
  cin>>n;
  int frq[26]={0};
  for (int i = 0; i < n; i++)
  {
    char a;
    cin>>a;
    frq[a-'a']++;
  }
  for (char i = 'a'; i <= 'z'; i++)
  {
    if(frq[i-'a'>0])
        {
            for (int j = 0; j <frq[i-'a']; j++)
            {
                cout<<i;
            }
            
        }

  }
  
 return 0;
}