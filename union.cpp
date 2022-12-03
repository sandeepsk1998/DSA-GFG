#include<iostream>
using namespace std;
typedef struct employee
{
	int id;
	char favchar;
	float salary;
}ep;
union money
{
	int rice ;
	char car;
	float pounds;
};

int main()
{
	union money m1;
	m1.rice=256;
	m1.car='f';
ep Sandeep;
Sandeep.id=64;
Sandeep.favchar='B';
Sandeep.salary=20000;
	
	cout<<Sandeep.id<<endl;
		cout<<Sandeep.salary<<endl;
			cout<<Sandeep.favchar<<endl;
			
				cout<<m1.rice<<endl;
				cout<<m1.car<<endl;
	return 0;
}
