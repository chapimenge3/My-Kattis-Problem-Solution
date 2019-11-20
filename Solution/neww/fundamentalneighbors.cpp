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
long long  prime(long long n )
{
    map<long long,long long>  m;
    long long p = 2;
    long long c=0;
    long long k = 0;
    while (n%2 == 0 && n!=1)
    {
        n = n/2;
        m[p]++;
    }
   for(long long p = 3 ; p *p <= n ;p+=2)
   {
       while (n%p == 0)
       {
           n = n / p;
           m[p]++;

       }
       
   }
    
    if(n>2)
    {
        m[n]++;
    }
    long long  res = 1;
    for(auto i : m)
    {
        // cout<<i.first<<" "<< i.second<<endl;
        res *= pow(i.second,i.first);
    }
    return res ;
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);;
    long long n;
    while(cin>>n)
    {
        cout << n << " " << prime(n) << endl;
    }
    
}