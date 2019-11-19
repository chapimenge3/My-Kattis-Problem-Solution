#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long long long
#define vi vector<long long>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<long long,long long>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second
using namespace std;
long long find(long long x,long long arr[])
{
   if (arr[x] == x) return x;
   arr[x] = find(arr[x],arr);
   return arr[x];
}
long long un(long long A,long long B ,long long arr[] ,vector<long long> &v)
{
   long long bb = find(B,arr);
   long long aa = find(A,arr);
   if(aa == bb )
   {
      return v[aa];
   }
   if(v[aa] > v[bb])
   {
      v[aa] += v[bb];
      arr[bb] = aa;
      return v[aa];
   }
   else
   {
      v[bb] += v[aa];
      arr[aa] = bb;
      return v[bb];
   }

}
int main()
{
    long long t,n;
    cin>>t;
    while (t--)
    {
      long long arr[101000+9];
      vector<long long> vv(101000+9,1);
      cin>>n;
      string ss,s;
      map<string,long long> m;
      long long val = 1;
      for(long long i = 1 ; i <= n ; i++)
      {
         cin>>s>>ss;
         if(m.count(s)==0)
         {
            m[s] = val;
            arr[val] = val;
            val++;
         }
         if(m.count(ss)==0)
         {
            m[ss] = val;
            arr[val] = val;
            val++;
         }
         cout<< un(m[s],m[ss],arr,vv)<<endl;
      }
    }
    return 0;
}
