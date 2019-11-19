#include <bits/stdc++.h>
//For ordered_set
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define MOD 1000000007
#define test int t; cin>>t; while(t--)
#define init(arr,val) memset(arr,val,sizeof(arr))
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopr(i,a,b) for(int i=a;i>=b;i--)
#define loops(i,a,b,step) for(int i=a;i<b;i+=step)
#define looprs(i,a,b,step) for(int i=a;i>=b;i-=step)
#define ull unsigned long long int
#define ll long long int
#define P pair
#define PLL pair<long long, long long>
#define PII pair<int, int>
#define PUU pair<unsigned long long int, unsigned long long int>
#define L list
#define V vector
#define D deque
#define ST set
#define MS multiset
#define M map
#define UM unordered_map
#define mp make_pair
#define pb push_back
#define pf push_front
#define MM multimap
#define F first
#define S second
#define IT iterator
#define RIT reverse_iterator
#define FAST ios_base::sync_with_stdio(false);cin.tie();
#define FILE_READ_IN freopen("input.txt","r",stdin);
#define FILE_READ_OUT freopen("output.txt","w",stdout);
#define all(a) a.begin(),a.end()
#define ld long double
using namespace std;

bool p(pair<int,int> p , pair<int , int> p2)
{
   if(p.second == p2.second )
   {
      return p.first < p2.first;
   }
   return p.second < p2.second;
}
int main(){
   int a ;
   vector<pair<int,int> > v;
   cin>>a;
   int x , y;
   for (int i = 0; i < a; i++)
   {
      cin>>x>>y;
      v.emplace_back(make_pair(x,y));
   }
   sort(all(v),p);
  
   int mi = v[0].F , ma = v[0].S ;
   int c = 1 ; 
   for(int i = 1 ; i < a;i++)
   {
      if(v[i].first > ma)
      {
         c++ ;
         ma = v[i].second;
      }
   }
   cout<< c;
}