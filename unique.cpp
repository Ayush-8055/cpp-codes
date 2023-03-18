#include<iostream>
using namespace std;

int main()
{

    int arr[15] = {2,3,4,5,6,7,8,9,8,7,6,5,4,3,2};

   
    int ans = 0;

    for(int i=0; i<15; i++)
    {

       ans = ans ^ arr[i];

    }

    cout<<ans;



}