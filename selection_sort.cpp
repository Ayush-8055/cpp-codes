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

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                int bomb = arr[j];
                arr[j] = arr[i];
                arr[i] = bomb;
            }

        }
    }
    
    for(int i=0; i<n; i++)
    {
        cout<<"element "<<i+1<<" : "<<arr[i];
        cout<<endl;
    }
}