#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
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
int arr[1000000+9];
int find(int x)
    {
        if (arr[x] == x) return x;
        arr[x] = find(arr[x]);
        return arr[x];
    }
void un(int A,int B )
{
    //int root_A = root( A );
    //int root_B = root( B );
    arr[ find(A) ] = find(B) ;
}

bool connected(int x, int y)
{
    return find(x) == find(y);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    iota(arr,arr+n+1,0);
    int a,b;
    char c;
    for(int i = 0 ; i < q ; i++)
    {
       cin>>c>>a>>b;
       if(c=='?')
       {
           connected(a,b)  ? cout<<"yes\n" :cout<<"no\n";
       }
       else
       {
           un(a,b);
       }
       
    }
   

    return 0;
}