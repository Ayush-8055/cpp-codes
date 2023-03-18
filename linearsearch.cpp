#include<iostream>
using namespace std;

int linearsearch(int arr[], int n, int key);

int main()
{
    int n;
    cout<<"enter size of array : ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"enter element "<<i+1<<" : ";
        cin>>arr[i];
    }

    int key;
    cout<<"enter number found : ";
    cin>>key;

    cout<<linearsearch(arr,n,key);

}

int linearsearch(int arr[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;

}