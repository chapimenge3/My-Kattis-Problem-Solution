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
int arr[200000];
/*
int root(int i)
{
    while(arr[ i ] != i)
    {
        i = arr[ i ];
    }
    return i;
} */

int find(int x)
    {
        if (arr[x] == x) return x;
        arr[x] = find(arr[x]);
        return arr[x];
    }
void un(int A,int B )
{
    //int root_A = root( A );
    //int root_B = root( B );
    arr[ find(A) ] = find(B) ;
}

bool connected(int x, int y)
{
    return find(x) == find(y);
}
int main()
{
    int num_house, cables;
    cin>>num_house>>cables;

    for(int i = 0 ; i <= num_house ; i++)
    {
        arr[i] = i;
    }
    int x,y;
    for(int i = 0; i < cables ; i++)
    {
        cin>>x>>y;
        un(x,y);
    }
    int temp = arr[1];
    int c = 0;
    for(int i = 1 ; i <= num_house; i++)
    {
        if(!connected(1,i))
        {
            cout<<i<<endl;
            c++;
        }
    }
    if(c == 0)
    {
        cout<<"Connected";
    }

    return 0;
}