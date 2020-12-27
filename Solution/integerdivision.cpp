#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define F first

#define all(x) x.begin(), x.end()

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // set<pair<ll, ll>> s;
    long long n, x, num, res ;
    cin >> n >> x;
    map<long long, long long> m;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        res = num / x;
        m[res]++;
    }
    long long result = 0; 

    for (auto i : m)
    {
        // cout<< i.second<<" " ;
        result += ((i.second*(i.second-1))/2);
    }
    cout<< result ;
}
