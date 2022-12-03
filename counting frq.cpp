#include<bits/stdc++.h>
using namespace std;

bool isPalindrome (int N)
{				// function to check whether a number is Palindrome or not

  int rev = 0, rem;

  int temp = N;

  while (temp)
    {
      rem = temp % 10;
      rev = rev * 10 + rem;
      temp /= 10;
    }

  if (N == rev)
    return 1;

  return 0;
}

int main ()
{

  int N;			// variable for size of the array

  cout << "Enter the size of the array: ";
  cin >> N;

  int A[N];			// Declaration of an array of size N
    
  cout << "\nInput the elements of the array: ";
 
  for (int i = 0; i < N; i++)
    cin >> A[i];

  

  int result;			// variable that store the final output

  for (int i = 0; i < N; i++)
    {

      // check every ith value is Palindrome or not

      if (isPalindrome (A[i]))
	   result = A[i];

    }

  cout << "\nThe longest palindrome number is : " << result;

  return 0;
}
