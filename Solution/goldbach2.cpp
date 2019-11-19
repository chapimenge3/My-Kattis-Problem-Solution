
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
bool prime[32000+10];
void SieveOfEratosthenes(int n)
{

    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
}
using namespace std;
int main()
{
    SieveOfEratosthenes(32000);
    prime[1]=false;
    int t;cin>>t;
    for(int i = 0; i < t ; i++)
    {
        int num;cin>>num;
        vector<pair < int,int> > v;
        for(int j = (num/2) ; j > 0 ; j--)
        {
            if(prime[j])
            {
                if(prime[num-j])
                {

                    v.push_back(make_pair(min(j,num-j),max(j,num-j)));
                }
            }
        }
        sort(v.begin(),v.end());
        cout<<num<<" has "<<v.size()<<" representation(s)"<<endl;
        for(auto j : v)
            cout<<j.first<<"+"<<j.second<<endl;
        cout<<endl;


    }
}
