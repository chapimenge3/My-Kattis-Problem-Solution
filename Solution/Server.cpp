#include<bits/stdc++.h> 
using namespace std; 
int main()
{
   int t,n,num,c=0,s=0;
   cin>>t>>num;
   for(int i = 0; i < t ; i++ )
   {
      cin>>n;
      // cout<<s<<"\n";
      if(n + s > num)
      {
         break;
      }
      s+=n;
      c++;
   }
   cout<<c;
}