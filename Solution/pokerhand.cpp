#include<bits/stdc++.h>
using namespace std;
int main()
{
   
   ios::sync_with_stdio(false);
   cin.tie(0);
   map<char,int> m;
   string x;
   for(int i = 0 ; i < 5 ;i++)
   {
      cin>>x;
      m[x[0]]++;
   }
   int ma =0;
   for(auto i : m)
   {
      ma = max(i.second,ma);
   }
   cout<<ma;

   
   
   
}