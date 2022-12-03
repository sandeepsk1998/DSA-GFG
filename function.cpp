#include<iostream>
using namespace std;

int sum(int a,int b)
{
	int c=a+b;
	return c;
}
void g();

int main()
{
	
	int n1,n2;
	cout<<"enter the the number"<<endl;
	cin>>n1;
	cout<<"enter the the number"<<endl;
	cin>>n2;

		cout<<"the sum is:"<<sum(n1,n2);
		g();
	
	return 0;
}

void g(){

cout<<"\nhi Arti";
}
