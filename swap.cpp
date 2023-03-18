#include<iostream>
using namespace std;

void swap(int a[] ,int n);
void printarray(int a[],int n);

int main()
{

    int even[8]={5,4,6,2,8,9,7,1};
    int odd[8]={3,67,54,32,8,7,89,65};

    swap(even, 8);
    printarray(even ,8);

    cout<<endl;

    swap(odd ,8);
    printarray(odd ,8);
   

   
  

  


}

void swap(int a[] ,int n)
{
       for(int i=0; i<n; i=i+2)
    {
        if(i+1<n)
        {
            swap(a[i],a[i+1]);
        }
    }
}
void printarray(int a[],int n)
{
    for( int i=0; i<n; i++)
    {
       
        cout<<a[i];

        cout<<endl;

    }
   

    
}