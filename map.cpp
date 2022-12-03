#include<iostream>
#include<map>
using namespace std;

int main()
{
	map < int ,string> customer;
	customer[100]="Gajju";
	customer[110]="munna";
	customer[120]="lalit";
	customer[130]="kaleen";
	customer.insert({20,"Sandeep"});
map<int ,string> :: iterator iter;
for(iter=customer.begin();iter!=customer.end();iter++)
{
	cout<<(*iter).first << " "<<(*iter).second<<endl;
}
		return 0;

}
