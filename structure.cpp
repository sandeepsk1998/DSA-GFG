#include<iostream>
using namespace std;
typedef struct employee
{
	int id;
	char favchar;
	float salary;
}ep;
int main()
{
ep Sandeep;
Sandeep.id=64;
Sandeep.favchar='B';
Sandeep.salary=20000;
	
	cout<<Sandeep.id<<endl;
		cout<<Sandeep.salary<<endl;
			cout<<Sandeep.favchar<<endl;
				
	return 0;
}
