#include<iostream>

using namespace std;

int main()
{
    const int a = 23;
    int b;
    cout<<"the value is : "<<a<<endl;
    cout<<"enter the value : ";
    cin>>b;
    // a = b; here the value of a is constant so not change
    cout<<"the value is : "<<a<<endl;


}

