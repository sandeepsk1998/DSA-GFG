#include<iostream>
using namespace std;
int main()
{
	int v,w;
	cin>>v>>w;
	float x=((4*v)-w)/2;
	if(w&1 || w<=v)
	{
		cout<<"invalid ";
		
	}
	cout<<x<<v-x;
	return 0;
	
}
