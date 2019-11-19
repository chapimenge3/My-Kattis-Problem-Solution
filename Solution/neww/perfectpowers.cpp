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
    std::ios::sync_with_stdio(false);
    long long int t;
    while(cin >> t && t)
    {
        int c = 0 ;
        if(t == 1 || t==1 || t == 2 || t == -1 || t == -2)
        {
            c=1;
            cout<<c<<endl;
        }
        else if (t > 2)
        {
            for(int i = 2 ; i <= (int)sqrt(t) ; i++)
            {
                if( abs( log(t)/log(i)  - round(log(t)/log(i)) ) < pow(10,-14) && round(log(t)/log(i)) > c )
                {
                    c  = (int)round(log(t)/log(i)) ;
                }
            }
            if (c == 0)
            {
                c = 1;
            }
            cout<<c<<endl;
        }
        else if( t < -2 )
        {
            t = -t;
            for(int i = 2 ; i <= (int)sqrt(t) ; i++)
            {
                if( (abs( log(t)/log(i)  - round(log(t)/log(i)) ) < pow(10,-14)) && (round(log(t)/log(i)) > c ) &&  ( (int)round(log(t)/log(i) ) % 2 != 0 ) )
                {
                    c  = ((int)round(log(t)/log(i))) ;
                }
            }
            if (c == 0)
            {
                c = 1;
            }
            cout<<c<<endl;
        }
    }

    return 0;
}
