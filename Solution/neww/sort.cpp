#include <bits/stdc++.h>
//For ordered_set
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define MOD 1000000007

#define init(arr,val) memset(arr,val,arr.size())

#define FAST ios_base::sync_with_stdio(false);cin.tie(0);

using namespace std;
map<int,int > mv; //,greater<int>
map<int,int> arr;
int main(){

   FAST
   int x, y;
   cin>>x>>y;
   vector<tuple< int,int,int> >v;
   int a; 
   int c = x;
   set<int> vv;
   for(int i = 0 ; i< x;i++)
   {
      cin>>a;
      vv.insert(a);
      arr[a] += 1;
      if(mv.count(a) == 0)
      {
         mv[a] = c ;
         c--;
      }
   }
   for(auto i : vv)
   {
      if(arr.count(i) != 0)
      v.push_back( make_tuple(arr[i],mv[i],i) );
   }
   sort(v.rbegin(),v.rend());
   for(auto i: v)
   {
      for(int j = 0 ; j < get<0>(i);j++ )
      {
         cout<<get<2>(i) <<" ";
      }
      
   }

}