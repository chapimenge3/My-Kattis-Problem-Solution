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
int main(){
   string x;
   cin>>x;
   vector<string> v[27] ;
   int c ;
   cin>>c;
   string l;
   for(int i = 0 ; i<c;i++ )
   {
      cin>>l;
      v[ (int)l[0]-96 ].push_back(l) ; 
   }
   if( v[ ((int)x[x.length()-1] )-96 ].size() == 0 ) 
   {
      cout<<"?\n";
   }
   else
   {
      bool nextun = false;
      string un ;
      for(auto i : v[((int)x[x.length()-1]) - 96 ])
      {
         // cout<<v[((int)i[i.length()-1]) - 96 ][0];
         if(v[((int)i[i.length()-1]) - 96 ].size() == 0)
         {
            nextun = true;
            un = i;
            break;
         }
         else if( v[ ((int)i[i.length()-1]) - 96 ].size() != 0 )
         {
            if(find(all(v[ ((int)i[i.length()-1]) - 96 ]) , i) != v[ ((int)i[i.length()-1]) - 96 ].end())
            {
               if(v[ ((int)i[i.length()-1]) - 96 ].size() == 1)
               {
                  nextun = true;
                  un = i;
                  break;
               }
            }
            
         }
      }
      if(nextun)
      {
         cout<< un <<"!\n" ;
      }
      else
      {
         cout<<v[(int)x[x.length()-1]-96 ][0]<<endl;
      }
      
   }
   
   return 0;
}