// CPP program to find number of n
// digit numbers that do not
// contain 9 as it's digit
#include <bits/stdc++.h>
using namespace std;


int main()
{
	long long x;cin>>x;
	if (x==1)
	{
		cout<<'0';
		return 0;
	}
	for(int i = 2 ; i <=sqrt(x) ; i++)
	{
		if(x%i == 0)
		{
			cout<<x - x/i;
			return 0;
		}
	}
	cout<< x-1;
   /* vector<int> sequence={6,8,1,4,2,3,4,5,6,7,8,9,100,10,11};
    vector<int> lis(sequence.size() + 1, INT_MAX); // [i]: min value in sequence that have LIS = i
    for (int i = 0; i < sequence.size(); i++)
    {
        int r = sequence[i];
        auto ptr = lower_bound(begin(lis), end(lis), r);
        *ptr = min(*ptr, r);
    }
    for(auto i :lis)
    if (i != INT_MAX)
        cout<<i<<" ";*/
    return 0;
}
