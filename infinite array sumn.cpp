#include <bits/stdc++.h>
using namespace std;

// Function to find the sum of elements
// in a given range of an infinite array
void rangeSum(int A[], int N, int L, int R)
{
	// Stores the sum of array elements
	// from L to R
	int sum = 0;

	// Traverse from L to R
	for (int i = L - 1; i < R; i++) {
		sum += A[i % N];
	}

	// Print the resultant sum
	cout << sum;
}

// Driver Code
int main()
{
	int A[100],N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
       cin>>A[i] ;
    }

	int L , R;
    cin>>L >> R ;
	rangeSum(A, N, L, R);

	return 0;
}
