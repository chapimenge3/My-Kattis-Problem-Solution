#include<bits/stdc++.h>
using namespace std;
int main()
{
   
   ios::sync_with_stdio(false);
   cin.tie(0);
   map<string,int> m;
   int t;
   cin>>t;
   string a;
   while (t--)
   {
      cin>>a;
      if(m.count(a)==0)
      {
         cout<< 0 << endl;
      }
      else
      {
         cout<<m[a]<<endl;
      }
      
      for(int i = 0 ; i < a.length() ;i++)
      {
         m[a.substr(0,i+1)]++;
      }
   }
   

   
   
   
}