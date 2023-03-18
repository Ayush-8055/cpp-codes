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

    for(int i=1; i<n; i++)
    {
        int temp = arr[i];
        int j=i-1;
        while(j>=0)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        } 
        arr[j+1] = temp;
    }


     for(int i=0; i<n; i++)
    {
        cout<<"element "<<i+1<<" : "<<arr[i];
        cout<<endl;
    }
}