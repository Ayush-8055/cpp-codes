#include<iostream>
using namespace std;

int main()
{
    int n;
   
    cin>>n;

    for(int i=1; i<30; i++)
    {
        if(i % 2 == 0)
        {
            continue;
        }

        if(n == 0)
        {
           
            
            break;
        }
        
        n = n - 300;
    }

    cout<<n;
    cout<<endl<<"enjoy";

    return 0;
    
}