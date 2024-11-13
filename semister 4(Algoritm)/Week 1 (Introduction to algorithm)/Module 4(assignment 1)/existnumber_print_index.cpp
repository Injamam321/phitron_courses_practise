#include<bits/stdc++.h>
using namespace std;

const int N=1e5+7;
int nums[N];

int Binary_Search(int l, int r, int k)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (nums[mid] == k)
            return mid;
        else if (nums[mid] < k)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1; // Not found
}

int main()
{
    int n;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> nums[i];
    }
    
    int k;
    cin >> k;
    
    int result = Binary_Search(0, n - 1, k);
    if (result != -1)
    {
        cout << result << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    
    return 0;
}
