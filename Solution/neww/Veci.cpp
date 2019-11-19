#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define vi vector<int>

#define pii pair<int,int>
#define vvi vector < vi >
#define vpii vector<pii>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a ;
    cin>>a;
    if( next_permutation(all(a)))
      cout<<a  ;
    else
    {
        cout<<0;
    }
    
    return 0;
}