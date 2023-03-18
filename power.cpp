#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number : ";
    cin>>n;
    int space;

    while(n != 0)
    {
       space = n % 2 ;
       if(space == 1)
       {
        cout<<"false";
        break;
       }
       n = n/2;


    }
    cout<<"true";
    return 0;
}