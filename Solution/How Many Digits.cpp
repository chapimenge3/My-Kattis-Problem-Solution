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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    while(cin>>t)
    {
        cout<<findDigits(t) <<"\n";
    }
    
    return 0;
}