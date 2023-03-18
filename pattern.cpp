#include<iostream>
using namespace std;

int main()
{
    int i,j;
    int count=1;
    for (i=0; i<5; i++)
    {
        for(j=0; j<i+1; j++)
        {
            cout<<"\t "<<count;
            count++;

        }
        cout<<"\n";
    }
    
    
    

    return 0;
}