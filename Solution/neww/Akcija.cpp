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

string gr(int &a, int b)
{
   string s="";
   if(a < b)
   {
      s="0.";
      a= a*10;

      while (a<b)
      {
         s+="0";
         a=a*10;
      }
   }
   return s;
}
string longdv(int a, int b, int n, string s)
{
   int x,y;
    int c = 0;
   while (s.length() < n+2)
   {
      if(a == 0 )
      {
         return s;
      }
      if(a < b)
      {
         a = a*10;
         if( c >=1) 
         {
            s += "0";
         }
         c++;
      }
      else
      {
         c = 0;
         x = a/b;
         y = x * b;
         a = a-y;
         s += to_string(x);
      }
      
   }
   return s;
}

int main(){
   int a,b;
   vector<int> v;
   cin>>a;
   for(int i = 0 ; i < a;i++)
   {
      cin>>b;
      v.emplace_back(b);
   }
   sort(v.rbegin() , v.rend() );
   int c = 0,s = 0;
   for(int i = 0 ; i < a ; i++)
   {
      if(c == 2 )
      {
         c=0;
      }
      else
      {
         s+= v[i];
         c++;
      }
   }
   cout<< s;
  
  
}