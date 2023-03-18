#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the binary number : ";
    cin>>n;

    int m = n;
    int mask = 0;

    if(n == 0)
    {
        cout<<"0";

    }

    while(m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;

    }

    int ans;
    ans = (~n) & mask;
    cout<<"value is : "<<ans;

    return 0; 


}