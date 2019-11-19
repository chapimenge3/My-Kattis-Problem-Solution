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
int main()
{
    int t,in;
    cin>>t;
    stack<int> s;
    for(int i = 0 ; i < t; i++)
    {
        cin>>in;
        s.push(in);
    }
    stack<int> ss;
    ss.push(s.top());
    s.pop();
//    cout<<ss.size()<<" siza< >val "<<ss.top()<<endl;
    int siz = s.size();
    while(!s.empty())
    {
        if((ss.top()+s.top())%2 ==  0)
        {
            s.pop();
            ss.pop();
            if(ss.empty() && !s.empty())
            {
                ss.push(s.top());
                s.pop();
            }
            continue;
        }

        ss.push(s.top());
        s.pop();
    }
    cout<<ss.size();

    return 0;
}
