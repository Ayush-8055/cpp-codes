#include<iostream>
using namespace std;

int main()
{
     int n;
    cout<<"enter size of array : ";
    cin>>n;
     
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"enter enement"<<i+1<<" : ";
        cin>>arr[i];
    }

    int counter = 1;
    while(n - counter)
    {
        for(int i=0; i<n-counter; i++)
        {
            if(arr[i]>arr[i+1])
            {
               int temp = arr[i];
                   arr[i] = arr[i+1];
                   arr[i+1] = temp;
            }
        }
        counter++;

    }


     for(int i=0; i<n; i++)
    {
        cout<<"element "<<i+1<<" : "<<arr[i];
        cout<<endl;
    }
}