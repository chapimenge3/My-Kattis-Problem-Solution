#include <bits/stdc++.h>
//For ordered_set
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define MOD 1000000007

#define init(arr,val) memset(arr,val,arr.size())

#define FAST ios_base::sync_with_stdio(false);cin.tie(0);

using namespace std;

int main(){

   FAST
   int a,b,c;
   while(cin>>a>>b>>c && a != 0 && b != 0 &&  c != 0 )
   {
      int arr[3] = {a,b,c};
      sort(arr,arr+3);
      if( (arr[0]*arr[0] ) + (arr[1]*arr[1]) == (arr[2]*arr[2]) )
      {
         cout<<"right\n";
      }
      else
      {
         cout<<"wrong\n";
      }
      
   }

}