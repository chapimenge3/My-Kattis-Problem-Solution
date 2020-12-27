#include<bits/stdc++.h> 
using namespace std; 
bool arr[10000+9];
void sieve()
{
    for(int i = 2 ; i *i <= 10000 ; i++)
    {
        if(!arr[i])
        {
            for(int p = i*2 ; p <= 10000 ; p+=i )
            {
                arr[p] = 1;
            }
        }
    }
    arr[0] = 1;
    arr[1] = 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<char,int> m;
    string x ;
    cin>>x;
    for(auto i :x )
    {
        m[i]++;
    }
    int aa[ m.size()+1 ];
    int d = 0;
    for(auto i : m)
    {
        aa[d] = i.second;
        d++;
    }
    sort(aa,aa+d);
    // for(int i = 0 ; i < d ;i++)
    // {
    //     cout<<aa[i]<<" ";
    // }
    int s = m.size();
    if( s <= 2)
    {
        cout<<0;
    }
    else
    {
       int c = 0;
       for(int i = 0 ; i < d-2 ;i++)
       {
            c += aa[i];
            // if(s-c <= 2)
            // {
            //     cout<<c;
            //     return 0;
            // }
       }
       cout<<c;
    }
}
