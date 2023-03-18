#include<iostream>
using namespace std;

int main()
{
      int m,n;
    cin>>m;
    cin>>n;

    int a[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {

            cin>>a[i][j];
        }
    }

    
    int maxi = INT_MIN;
    for(int i=0; i<m; i++)
    {
        int sum =0; 
        for(int j=0; j<n; j++)
        {
            sum = sum + a[i][j];
        }
        cout<<"sum of "<<i+1<<"row"<<sum<<endl;
        if(sum > maxi)
        {
            maxi = sum;
        }

    }

    cout<<"maxi of row is : "<<maxi;
}