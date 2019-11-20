#include<bits/stdc++.h>
#define FAST ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define init(arr,val) memset(arr,val,sizeof(arr))
#define mp make_pair
#define pb push_back
#define all(a) a.begin(),a.end()
// #define int long long
#define endl "\n" 
using namespace std;
typedef long long ll;
bool prime(long long n)
{
    if(n==0 || n==1)
        return false;
    for(long long i = 2 ; i *i <= n ; i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}
int val(char c) 
{ 
	if (c >= '0' && c <= '9') 
		return (int)c - '0'; 
	else
		return (int)c - 'A' + 10; 
} 

long long toDeci(string str, int base) 
{ 
	long long len = str.length(); 
	long long power = 1; 
	long long num = 0; 
    long long i; 
	for (i = len - 1; i >= 0; i--) 
	{ 
		if (val(str[i]) >= base) 
		{ 
		return -1; 
		} 

		num += val(str[i]) * power; 
		power = power * base; 
	} 
	return num; 
} 
int main()
{
    ios::sync_with_stdio(false);
    // cin.tie(NULL);;
    long long n;
    cin>>n;
    while(n--)
    {
        string a;
        cin>>a;
        long long arr[] ={2,8,10,16};
        long long c = 0 ,p = 4 ;
        long long num ;
        for(auto i : arr)
        {
            num = toDeci(a,i);
            if(num == -1)
            {
                p--;
            }
            else
            {
                if(prime(num))
                {
                    c++;
                }
            }
        }
        long long gc = __gcd(c,p) ;
        cout<< c / gc<<"/"<< p / gc<<"\n";
    }
    
    
}