// C++ program to prlong long int all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;
bitset<100000009> prime;
long long int num = 1 , x = 0;
void SieveOfEratosthenes(long long int n)
{

	for (long long int p = 2; p*p <= n; p++)
	{
		if (prime[p] == false)
		{
			for (long long int i = p*p; i <= n; i += p)
				{
				    num--;
				    prime[i] = true;
				}
		}
	}
}
int main()
{
	long long int n;int t;
	cin>>n>>t;
	num = n-1;
	SieveOfEratosthenes(n);
	for(int i = 2 ; i <= n;i++)
    {
        if(!prime[i])
            x++;
    }
    cout<<x<<endl;
    prime[1]=true;
    prime[0]=true;
	for(int i = 0 ; i < t; i++)
    {
        cin>>n;
        if(!prime[n])cout<<"1\n";
        else cout<<"0\n";
    }
	return 0;
}
