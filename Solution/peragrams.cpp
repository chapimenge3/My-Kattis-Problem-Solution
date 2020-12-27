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

unordered_set<char> s;
unordered_map<char, int> m;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string input;
    cin >> input;
    int len = input.length();
    for (auto i : input)
    {
        m[i]++;
    }
    vector<char> v;
    for (auto i : m)
    {
        if (i.second % 2 != 0)
        {
            v.push_back(i.F);
        }
    }
    int i = 0;
    while (!v.empty())
    {
        if (v.size() == 1 && len % 2 != 0)
            break;
        v.pop_back();
        len--;
        i++;
    }
    cout << i;
}
