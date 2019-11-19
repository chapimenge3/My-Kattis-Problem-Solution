#include <bits/stdc++.h>
#include <thread>
#include <chrono>
using namespace std;
int main()
{
    int l = 1;
    int r = 1000,mid;
    string j ;
for (int i = 0; i <= 10; ++i)
{
    int mid = l + (r-l)/2;
	cout << mid <<endl<<flush;
	cin>> j;
	if(j=="lower")
    {
        r = mid-1;
    }
    else if (j=="higher")
    {
        l = mid+1;
    }
    else
    {
        break;
    }
}
return 0;
}
