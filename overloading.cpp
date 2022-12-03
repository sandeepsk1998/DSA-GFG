#include<iostream>
using namespace std;
int add(int a,int b)
{
	
return a+b;
	
}
int add(int a,int b,int c)
{
	
return a+b+c;
	
}
int volume(double r,int h)
{
	return(3.14*r*r*h);
	
}
int main()
{
	cout<<"the volume is"<<volume(4,5)<<endl;
	
	return 0;
}
