#include<bits/stdc++.h>
#define FAST ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define init(arr,val) memset(arr,val,sizeof(arr))
#define mp make_pair
#define pb push_back
#define all(a) a.begin(),a.end()
// #define int long long
#define endl "\n" 
using namespace std;
typedef long long ll;
const int iinf = 1e9 + 10;
const ll  inf  = 1e18 + 10;
int dig[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8}; 
int last(int n) 
{ 
     if (n < 10) 
        return dig[n]; 
    if (((n/10)%10)%2 == 0) 
        return (6*last(n/5)*dig[n%10]) % 10; 
    else
        return (4*last(n/5)*dig[n%10]) % 10; 
}
int main()
{
    int t;
    while(cin>>t && t)
    {
        cout<<last(t) << endl;
    }
}