


#include<bits/stdc++.h>
#include<iostream>

using namespace std;

typedef long long int ll;
 // Function to calculate gcd of two numbers

ll gcd(ll a, ll b)

{

 if (a==0 )

return b;

 return gcd(b%a, a) ;

}



 ll commDiv(ll a, ll b)

{

// find gca of a, b
  ll n = gcd(a, b);

// Count divisors of n.
 int result =0;

for (int i = 1; i <= sqrt(n); i++)
{
 // if 'i' is factor of n 
 if (n % i== 0)
{
// check it divisors are equal

if (n / i == i)

result += 1;
else
result += 2;
}


}
 return result;

}

// Driver program to run the case int main()



int  main() 
{
	 ll  a , b;
	cin>> a >> b;
	cout<< commDiv(a,b);
	return 0;
}
	

