#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"enter the number";
	cin>>x;
	int temp=x;
	int sq=x*x;
	int flag=0;
    while(x)
    {
    	if(x%10!=sq%10)
    	{
    		flag=1;
    	break;
        }
        x=x/10;
        sq=sq/10;
    }
	if(flag==1)
	{
			cout<<"number is not automorphic";
	}
	else
		cout<<"number is automorphic";
		return 0;
}
