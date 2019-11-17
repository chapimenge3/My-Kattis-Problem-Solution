#include<bits/stdc++.h> 
using namespace std; 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int x ;cin>>x;
        int arr[x+1] ;
        for(int i = 0 ; i <= x ; i++)
        {
            cin>>arr[i];
        }
        int y;
        cin>>y;
        int arr1[y+1];
        for(int i = 0 ; i <= y; i++)
        {
            cin>>arr1[i];
        }
        int res[x+y+1];
        memset(res,0,sizeof(res));
        for (int i = 0; i <= x ; i++)
        {
            for(int j = 0 ; j <= y; j++)
            {
                res[i+j] += (arr[i]*arr1[j]);
            }
        }
        cout<<x+y<<"\n"; 
        for(int i = 0 ;i <x+y+1;i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<"\n";
    }
    
}