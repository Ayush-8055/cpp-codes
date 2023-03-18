#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int key);

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

    int key;
    cout<<"enter key : ";
    cin>>key;

    cout<<binary_search(arr,n,key);
    return 0;
}

int binary_search(int arr[],int n,int key)
{
   int s=0;
   int e=n;
   

   while(s<=e)
   {
    int mid = (s+e)/2;
    if(arr[mid] == key)
    {
        return 1;
    }
    else if(arr[mid]>key)
    {
        e = mid-1;
    }
    else{
        s = mid+1;
    }
   }
   return -1;
}

