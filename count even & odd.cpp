#include<iostream>
using namespace std;
int main()
{
	int count=0,ecount=0;
	 int a[10]={12,3,4,7,8,9};
	 for(int i=0;i<6;i++)
	 {
	 	if(a[i]%2==0)
	 	{
	 	count++;
		 }
		 else
		 ecount++;
	}
	cout<<count<<endl;
	cout<<ecount;
		 return 0;
	}
	 
