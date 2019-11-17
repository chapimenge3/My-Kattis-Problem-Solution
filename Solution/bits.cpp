#include<bits/stdc++.h>
using namespace std;
int main()
{
   
   ios::sync_with_stdio(false);
   cin.tie(0);
   int a;
   cin>>a;
   while (a--)
   {
      int x ;
      cin>>x;
      string y ="";
      string z = to_string(x);
      int c = 0;
      for(int  i = 0 ; i <z.length();i++)
      {
         y= z.substr(0,i+1);
         c = max(__builtin_popcount( stoi(y) ), c);
      }
      cout<<max(c ,__builtin_popcount(x) )<<endl;
   }
   
   
}