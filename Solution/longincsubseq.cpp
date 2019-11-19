
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
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


void lis(vector<int> v )
{
    vector<int> p(v.size(), -1);
    vector<int> t(v.size(), 0);

    int lis = 1;
    for(int i = 1; i < v.size(); i++)
    {
        if(v[i] <= v[t[0]])
        {
            t[0] = i;
        }
        else if(v[i] > v[t[lis - 1]])
        {
            p[i] = t[lis - 1];
            t[lis++] = i;
        }
        else
        {
            int l = -1;
            int r = lis - 1;
            while(r - l > 1)
            {
                int m = l + (r - l) / 2;
                if(v[t[m]] >= v[i])
                    r = m;
                else
                    l = m;
            }
            p[i] = t[r - 1];
            t[r] = i;
        }
    }
    vector<int> ans;
    for(int i = t[lis - 1]; i >= 0; i = p[i])
    {
        ans.push_back(i);
    }
    reverse(ans.begin(), ans.end());
    cout << (ans.size() ) <<endl;
    for(auto i : ans)
        cout<<i<<" ";
    cout<<endl;
}
int main()
{
    std::ios::sync_with_stdio(false);
    int T;
    while(cin>>T)
    {
        vector<int> v;
        int in;
        for(int i = 0 ; i < T ; i++)
        {
            cin>>in;
            v.push_back(in);
        }
        lis(v);

    }
    return 0;
}
