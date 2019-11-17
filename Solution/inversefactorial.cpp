#include <bits/stdc++.h>
//For ordered_set
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define MOD 1000000007

#define init(arr,val) memset(arr,val,arr.size())

#define FAST ios_base::sync_with_stdio(false);cin.tie(0);

using namespace std;
long long findDigits(int n) 
{ 
	if (n < 0) 
		return 0; 

	if (n <= 1) 
		return 1;  
	double x = ((n * log10(n / M_E) + 
				log10(2 * M_PI * n) / 
				2.0)); 

	return floor(x) + 1; 
} 
int main(){

   FAST
   string  n ;
   cin>>n;
   map<string,int> m;
   m["1"]=1;
   m["1"]=1;
   m["2"]=2;
   m["6"]=3;
   m["24"]=4;
   m["120"]=5;
   m["720"]=6;
   if(m.count(n)!=0)
   {
      cout<<m[n];
   }
   else
   {
      int y = n.length() ;
      
      for(int i = 7 ; i<=205050;i++)
      {
         if(findDigits(i) == y )
         {
            cout<<i;
            break;
         }
        
      }
      
   }
   
   

}