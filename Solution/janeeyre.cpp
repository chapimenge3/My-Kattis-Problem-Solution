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

pair<string, ll> split(string str)
{
    string val = "";
    ll ival, len = str.length(), is = 0;
    stringstream conv;

    for (ll i = 1; i < len; i++)
    {
        if (str[i] == '"' && i != 0)
        {
            is = i + 1;
            break;
        }
        val += str[i];
    }

    conv << str.substr(is, len);
    conv >> ival;
    return {val, ival};
}
tuple<ll, string, ll> split2(string str)
{
    ll ival1;
    string val = "";
    ll ival2, len = str.length(), is = 0;
    stringstream conv;

    for (ll i = 0; i < len; i++)
    {
        if (str[i] == '"')
        {
            is = i + 1;
            break;
        }
        val += str[i];
    }
    conv << val;
    conv >> ival1;
    val = "";

    for (ll i = is; i < len; i++)
    {
        if (str[i] == '"' && i != is)
        {
            is = i + 1;
            break;
        }
        val += str[i];
    }

    conv << str.substr(is, len);
    conv >> ival2;
    return {ival1, val, ival2};
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    priority_queue<pair<string, ll>, vector<pair<string, ll>>, greater<pair<string, ll>>> pq;
    ll her, frd, jpage;
    cin >> her >> frd >> jpage;
    pq.push({"Jane Eyre", jpage});
    ll page;
    string name;
    getline(cin, name);
    for (ll i = 0; i < her; i++)
    {
        getline(cin, name);
        pq.push(split(name));
    }
    ll time_;
    priority_queue<tuple<ll, string, ll>, vector<tuple<ll, string, ll>>, greater<tuple<ll, string, ll>>> s;
    for (ll i = 0; i < her; i++)
    {
        getline(cin, name);
        s.push(split2(name));
    }
    time_ = 0;
    ll st, sp;
    string sn;

    while (1)
    {
        while (!s.empty())
        {
            tie(st, sn, sp) = s.top();
            if (st > time_)
            {
                break;
            }

            pq.push({sn, sp});
            s.pop();
        }
        time_ += pq.top().S;
        if (pq.top().F == "Jane Eyre")
        {
            break;
        }
        pq.pop();
    }
    cout << time_;
}
