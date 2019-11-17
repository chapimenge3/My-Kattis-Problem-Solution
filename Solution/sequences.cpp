#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define all(a) a.begin(),a.end()
using namespace std;
int main()
{
    FAST;
    string s;
    cin>>s;
    reverse(all(s));
    long long inv = 0 , z = 0 , c = 1 ;
    for(auto i : s)
    {
        if(i=='0')
        {
            z+=c;
        }
        else if(i =='1')
        {
            inv += z;
        }
        else
        {
            inv = inv * 2 + z ;
            z = z*2 + c ;
            c = c * 2;
        }
        inv = inv % 1000000007;
        z = z % 1000000007;
        c = c % 1000000007;   
    }
    cout<<inv;
    return 0;
}
