#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the number";
    cout<<"enter the div number";
    cin>>n>>j;
    for(i=n;i>=j;i-=j)
    {
        cout<<i<<endl;
        
    }
    return 0;
}