#include<iostream>
using namespace std;

int stringlength(char name[]);
void reverse(char name[],int n);
char tolowercase(char ch);

int main()
{
    char name[20];

    cout<<"enter name"<<endl;
    cin>>name;
    cout<<name<<endl;

    cout<<"length : "<<stringlength(name)<<endl;

    int n= stringlength(name);

    reverse(name,n);
    cout<<"charackter is : "<<tolowercase('A');
     cout<<"characckter is : "<<tolowercase('c');
    
    


}


int stringlength(char name[])
{
    int count = 0;
    for(int i=0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
void reverse(char name[],int n)
{
    int s=0;
    int e=n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }
    cout<<name;
}
char tolowercase(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else{
        char temp = ch - 'A' +'a';
        return temp;
    }
}