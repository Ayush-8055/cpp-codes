#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;
    
    for(int row=1; row<=n; row++)
    {
        int space = n - row;
        while(space)
        {
           cout<<" ";
           space = space - 1;
        }
        
        int r = 1;
        int count = 1;
        while(r <= row )
        {
            cout<<count<<" ";
            count = count + 1;
            r = r + 1;

        }
        int start = row-1;
        while(start)
        {
            cout<<start<<" ";
            start = start-1;

        }
        cout<<"\n";
         
    }
}