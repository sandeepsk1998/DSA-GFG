#include <bits/stdc++.h>
using namespace std;
 
int main () 
{
    int n, a, sum = 0, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
    cin >> a;
      if (a)
	    sum += c;
      else
	    c++;
}
cout << sum;
}
