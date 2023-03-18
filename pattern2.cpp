#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;

    for(int row=0; row<=n; row++)
    {
        int space = n - row;
        while(space)
        {
            cout<<" ";
            space = space - 1;
        }

        int col = 1;
        while(col <= row)
        {
            cout<<"*";
            col = col + 1;

        }
        cout<<endl;


    }

}