#include <bits/stdc++.h>

using namespace std;
vector<int> v ;
bool  pal(int n)
{
    string x =  to_string(n) ;
    string y = x;
    reverse(x.begin(),x.end());
    return x == y;
}

void gen()
{
    for (int i  = 100000 ; i <= 999999 ; i++)
    {
        if(pal(i))
        {
            v.push_back(i);
        }
    }
}
int main()
{
    std::ios::sync_with_stdio(false);
    int n;
    gen();
    cin>>n;
    for(int i = 0 ; i < n ; i ++)
    {
        int x;
        cin>>x;
        if(pal(x))
        {
            cout<<x<<endl;
            continue;
        }
        else
        {
            int m = 999999 , num = 0 ;
            for( auto i : v )
            {
                if( m > abs( i - x) )
                {
                    m = abs( i - x);
                    num = i;
                }
            }
            cout<< num <<endl;
        }


    }

    return 0;
}
