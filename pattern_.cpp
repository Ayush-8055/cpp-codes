#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number of row : "<<endl;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            cout<<"\t"<<i-j+1;
        }
        cout<<endl;
    }
}