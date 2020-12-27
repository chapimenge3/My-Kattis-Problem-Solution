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

bool check(vector<string> path, int x, int y)
{
    pii poss = {0, 0};
    int pos = -1; // N = -1, S = 1, E = -2, W = 2
    for (auto i : path)
    {
        if (i == "Forward")
        {
            if (pos == -1)
            {
                poss.S++;
            }
            else if (pos == 1)
            {
                poss.S--;
            }
            else if (pos == -2)
            {
                poss.F++;
            }
            else
            {
                poss.F--;
            }
            // cout << i << ", pos =>" << pos << " stand = { " << poss.F << ", " << poss.S << " }" << endl;
        }
        else if (i == "Right")
        {
            if (pos == -1)
            {
                pos = -2;
            }
            else if (pos == 1)
            {
                pos = 2;
            }
            else if (pos == -2)
            {
                pos = 1;
            }
            else
            {
                pos = -1;
            }
            // cout << i << ", pos =>" << pos << " stand = { " << poss.F << ", " << poss.S << " }" << endl;
        }
        else if (i == "Left")
        {
            if (pos == -1)
            {
                pos = 2;
            }
            else if (pos == 1)
            {
                pos = -2;
            }
            else if (pos == -2)
            {
                pos = -1;
            }
            else
            {
                pos = 1;
            }
            // cout << i << ", pos =>" << pos << " stand = { " << poss.F << ", " << poss.S << " }" << endl;
        }
    }
    if (poss.F == x && poss.S == y)
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x, y;
    cin >> x >> y;
    int t;
    cin >> t;
    vector<string> v;
    string com;
    for (int i = 0; i < t; i++)
    {
        cin >> com;
        v.push_back(com);
    }

    // if (!check(v, x, y))
    // {
    //     cout << "False  " << x << "  " << y << endl;
    // }

    for (int i = 0; i < t; i++)
    {
        if (!check(v, x, y))
        {
            vector<string> vc = v;
            if (v[i] == "Forward")
            {
                vc[i] = "Left";
                if (check(vc, x, y))
                {
                    cout << i+1 << " " << vc[i];
                    return 0;
                }
                vc[i] = "Right";
                if (check(vc, x, y))
                {
                    cout << i+1 << " " << vc[i];
                    return 0;
                }
            }
            if (v[i] == "Left")
            {
                vc[i] = "Forward";
                if (check(vc, x, y))
                {
                    cout << i+1 << " " << vc[i];
                    return 0;
                }
                vc[i] = "Right";
                if (check(vc, x, y))
                {
                    cout << i+1 << " " << vc[i];
                    return 0;
                }
            }
            if (v[i] == "Right")
            {
                vc[i] = "Forward";
                if (check(vc, x, y))
                {
                    cout << i+1 << " " << vc[i];
                    return 0;
                }
                vc[i] = "Left";
                if (check(vc, x, y))
                {
                    cout << i+1 << " " << vc[i];
                    return 0;
                }
            }
            // cout << v[i] << "  " << x << "  " << y << endl;
        }
    }
}
