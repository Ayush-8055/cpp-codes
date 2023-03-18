#include<iostream>
using namespace std;

int main()
{
    int a[7]={1,2,3,4,5,6,7};
    int b[9]={1,3,5,7,9,10,12,23,4};
    
    int i=0;
    while (i != 6)
    { 
        for(int j=0; j<9; j++)
        {
            if(a[i] == b[j])
            {
                cout<<a[i];
            }
        }
        i++;
        
    }
    
}