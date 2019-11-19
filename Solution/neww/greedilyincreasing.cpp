#include<bits/stdc++.h>
using namespace std;
vector<long long int> v;
int main()
{
    ios::sync_with_stdio(false);
    int t ;
    cin>>t;
    vector<int> v ;
    int in,c=1,m;cin >> in;
    m=in;
    v.push_back(in);
    for(int i = 0; i < t-1 ; i++)
    {
    	cin>>in;
    	if(in > m )
    	{
    		c++;
    		m = in ;
    		v.push_back(in);
    	}
    }
    cout<<v.size()<<endl;
    for(auto i : v)
    	cout<<i<<" ";
}
