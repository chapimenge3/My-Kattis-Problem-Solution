#include <bits/stdc++.h>
#define MOD 1000000007
#define test int t; cin>>t; while(t--)
#define init(arr,val) memset(arr,val,sizeof(arr))
#define ull unsigned long long int
#define ll long long int
#define mp make_pair
#define pb push_back
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define all(a) a.begin(),a.end()
#define ld long double
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i = 0 ; i < n ;i++)
   {
      cin>>arr[i];
   }
   unordered_set<int> s;
   int c = 0;
   // cout<<s.size();
   while ( s.size() != n )
   {
      c++;
      // cout<<"DS\n";
      s.clear();
      for(auto i : arr)
      {
         s.insert(i%c);
      }
      
   }
   cout<<c;
   
}