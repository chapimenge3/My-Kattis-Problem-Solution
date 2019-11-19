#include<bits/stdc++.h>
using namespace std;

std::vector<int> v;
int main()
{
    int l,d,n,in,it=6,c=1;
    cin>>l>>d>>n;
    if(n==0)
    {
        cout<<(int) (l-12)/d +1;
    }
    else
    {
        for(int i=0 ; i < n ; i++)
        {
            cin>>in;
            v.push_back(in);
        }
        v.push_back((l-6));
        sort(v.begin(),v.end());
        for(int i = 0 ; i < v.size();i++)
        {
            while(it + d <= v[i])
            {
                it+= d;
                c++;
            }
            it=v[i];
        }
        cout<<c-n;
    }

}