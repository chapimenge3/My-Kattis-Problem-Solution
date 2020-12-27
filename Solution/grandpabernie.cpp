#include <bits/stdc++.h>
//For ordered_set
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define MOD 1000000007
#define test int t; cin>>t; while(t--)
#define init(arr,val) memset(arr,val,sizeof(arr))
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopr(i,a,b) for(int i=a;i>=b;i--)
#define loops(i,a,b,step) for(int i=a;i<b;i+=step)
#define looprs(i,a,b,step) for(int i=a;i>=b;i-=step)
#define ull unsigned long long int
#define ll long long int
#define P pair
#define PLL pair<long long, long long>
#define PII pair<int, int>
#define PUU pair<unsigned long long int, unsigned long long int>
#define L list
#define V vector
#define D deque
#define ST set
#define MS multiset
#define M map
#define UM unordered_map
#define mp make_pair
#define pb push_back
#define pf push_front
#define MM multimap
#define F first
#define S second
#define IT iterator
#define RIT reverse_iterator
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define FILE_READ_IN freopen("1.in","r",stdin);
#define FILE_READ_OUT freopen("1.out","w",stdout);
#define all(a) a.begin(),a.end()
#define allr(a) a.rbegin(),a.rend()
#define ld long double
using namespace std;
const ll maxn = 1e5;
const ll inf = 1e9;
const double pi = acos(-1);

int main(){
    FAST;
    // FILE_READ_IN;
    int a , c;
    string b ;
    cin>>a;
    map<string,vector<int> > m;
    for(int i = 0 ; i < a ;i++)
    {
        cin>>b>>c;
        m[b].push_back(c);
    }
    for(auto &i : m)
    {
        sort(all(i.second));
    }
    int t;
    cin>>t;
    for(int i = 0 ; i < t;i++)
    {
        cin>>b>>c;
        cout<<m[b][c-1]<<"\n";
    }
   return 0;
}
