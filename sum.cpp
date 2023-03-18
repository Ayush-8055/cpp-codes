#include<iostream>
using namespace std; 

int sum(int a,int b);

// int sum(int ,int ); also writtten as

int main(){
    int num1,num2;
    cout<<"\nenter the number : ";
    cin>>num1;

    cout<<"\nenter the number : ";
    cin>>num2;
    // num1 and num2 are actual parameters.
    cout<<"\nthe sum is : "<<sum(num1,num2)<<endl;
    
    return 0;
}


int sum(int a,int b) // int a and int b are formal parameters
// formal parameters a and b taking value from actual parameters num1 and num2.
{
    int c = a + b;
    return c;
}