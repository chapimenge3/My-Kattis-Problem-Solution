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
    sieve();
    int t;
    cin>>t;
    int a,b, c;
    while(t--)
    {
        cin>>a>>b;
        c = b;
        cout<<a<<" "<<b<<" ";
        if(!arr[b])
        {
            while(c >= 10)
            {
                int s = 0;
                for(auto i : to_string(c))
                {
                    s += ((i-48)*(i-48));
                }
                c = s;
            }
            if( c == 1 || c== 7)
            {
                cout<<"YES";
            }
            else
            {
                cout<<"NO";
            }
            cout<<"\n";
        }
        else
        {
            cout<<"NO\n";
        }
        
    }
    
}