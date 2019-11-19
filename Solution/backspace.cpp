#include <bits/stdc++.h>
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a;
    cin>>a;
    vector<char> v;
    for (auto i : a)
    {
        if(v.size() > 0)
        {
            if(i == '<')
            {
                v.pop_back();
            }
            else
            {
                v.push_back(i);
            }
        }
        else if(i!='<')
        v.push_back(i);
    }
    for(auto i : v)
        cout<<i;
    // queue<char> q;
    // reverse(all(a));
    // //  cout<<a;
    // for(auto i: a)
    // {
    //     q.push(i);
    //     // cout<<i<<" ";
    // }
    // // cout<<"\n";
    // int c = 0;
    // string bb="";
    // // cout<<q.front();
    // while (!q.empty())
    // {
    //     if(q.front()=='<')
    //     {
    //         c++;
    //         q.pop();
    //     }
    //     else
    //     {
    //         for(int  i = 0 ; i < c && !q.empty() ; i++)
    //         {
    //             q.pop();
    //         }
    //         if(!q.empty() && q.front()!='<')
    //         {
    //             bb+=q.front();
    //             q.pop();
    //         }
    //         c = 0;
            
    //     }
       
    // }
    // reverse(all(bb));
    // cout<<bb;    
    return 0;
}