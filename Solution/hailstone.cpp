#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end() 
#define rall(x) x.rbegin(), x.rend()
#define sortall(x) sort(all(x))
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

#define all(x) x.begin(), x.end() 
long long sum = 0;

long long rec(long long n){
    sum += n;
    if (n == 1)
        return 1;
    else if (n % 2 == 0)
        return rec(n/2);
    return rec(3*n + 1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    rec(n);
    cout << sum << endl;

}
