#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter binary number : ";
    cin>>n;

    int digit;

    int ans = 0;
    int i=0;

    while(n != 0)
    {
        digit = n % 10;

        if(digit == 1)
        {
            ans = ans + pow(2,i);



        }

        n = n/10;

        i = i+1;


    }

    cout<<"value is : "<<ans<<endl;

}