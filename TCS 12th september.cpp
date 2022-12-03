
#include<iostream>
using namespace std;
int main()
{
	string s;
	int a=0,b=0;
	getline(cin,s);
for(int i=0;i<s.length();i++)
	
		if(i=='#')
			a++;
		else if(i=='*')
		b++;
		
	
	cout<<b-a;
	return 0;

}

