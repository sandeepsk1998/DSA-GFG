#include<bits/stdc++.h>
using namespace std;

vector<long long> solve (int  A,int N,  int L,  int R) {
   // write your code here
   int sum=0;
   for( int i=L-1;i<R;i++)
   {
       sum+=A[i%N];
   }
   cout<<sum;
}

int main() {

    int T;
    cin >> T;
    for(int i=0; i<T; i++)
    {
        int N;
        cin >> N;
        for(int i=0; i<N; i++)
        {
        	cin >> A[i];
        }
        int Q;
        cin >> Q;
        vector<long long int> L(Q);
        for(int i=0; i<Q; i++)
        {
        	cin >> L[i];
        }
        vector<long long int> R(Q);
        for(int i=0; i<Q; i++)
        {
        	cin >> R[i];
        }

        vector<long long> out_;
        out = solve(A,N, R, L); 
        cout << out[0];
        for(int i=1; i<out.size(); i++)
        {
        	cout << " " << out[i];
        }
        cout << "\n";
    }
}
