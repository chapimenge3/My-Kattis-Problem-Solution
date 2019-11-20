#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define all(a) a.begin(),a.end()
using namespace std;

bool arr[20000+100];
vector<int> v ;
void sieve()
{
    arr[0] = 1;
    arr[1] = 1;
    for(int i = 2; i*i < 20000+100 ;i++)
    {
        if(arr[i] == false)
        {
            for(int p = i+i ; p < 20000+100 ; p += i)
            {
                arr[p] = true ;
            }
        }
    }
    for(int i = 2 ; i <= 20000 ; i++)
    {
        if(!arr[i] )
        {
            v.push_back(i);
        }
    }
}
int main()
{
    FAST;
    sieve();
    // for(auto i : v )
    // {
    //     cout<< i <<" ";
    // }
    int t ; 
    cin>>t;
    int n;
    double d ;
    for(int i = 0; i < t ;i++)
    {
        cin>>n>>d;
        vector< pair< double, double > > pt;
        double x, y;
        for(int j = 0; j < n ;j++)
        {
            cin>>x>>y;
            pt.push_back(make_pair(x,y));
        }
        double xp = 0 , yp = 0 , dd = 0;
        int c = 0;
        double xx , yy;
        for(auto j : pt)
        {
            xx = ( j.first - xp ) * ( j.first - xp );
            yy = ( j.second - yp ) * ( j.second - yp ) ;
            dd = sqrt(xx+yy) ;
            if( d - dd < 0 )
            {
                break;
            }
            c++;
            d -= dd;
            xp = j.first , yp = j.second ;
        }
        // cout<< c << " jkfhv " << endl;
        if( c < 2)
        {
            cout<< 0 << endl;
        }
        else
        {
            int a;
            for(auto i : v)
            {
                if ( i > c)
                {
                    break;
                }
                a = i; 

            }
            cout<< a << endl;
        }
        

    }
    return 0;
}
