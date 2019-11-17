#include<bits/stdc++.h>

using namespace std;

long long int c[1000002];

int main() {
	
	long long int n, cc = 0, a;
	cin>>n;
	while (n--) {
		cin>>a;
		c[a]++;
		a++;
		if (c[a] > 0)
		{
			c[a]= c[a] -1;
		}
		else
		{
			cc++;
		}
	}
	cout<<cc;
	return 0;
}
