/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b;
    while(t--)
    {
        
        cin>>a>>b;
        int arr[a];
        std::vector<int> v;
        vector<int> vv;
        vv.push_back(-1);
        for(int i = 0 ; i < a ; i++ )
        {
            cin>>arr[i];
            if( b == arr[i])
            {
                vv.push_back(i);
            }
        }
        vv.push_back(a); 
        int s = 0;
        int m = 0;
        for(int i = 1 ; i < vv.size()-1 ;i++)
        {
            s = 0;
            // cout<<"from "<< vv[i] <<" to ="<<vv[i-1]+1<<endl;
            // cout<<"from "<< vv[i] <<" to <"<< vv[i+1] - 1<<endl;
            for(int j = vv[i] ; j >= vv[i-1]+1 ;j--)
            {
                if(arr[j] < b)
                {
                    break;
                }
                s += arr[j];
                // cout<<arr[j]<<" " << s <<endl;
            }
            for(int j = vv[i] + 1 ; j < vv[i+1] ; j++)
            {
                if(arr[j] < b)
                {
                    break;
                }
                s+=arr[j];
                // cout<<arr[j]<<" " << s <<endl;
            }
            m = max(m,s);
            // cout<<endl<<endl;
        }
        cout<<m<<endl;
        
    }

    return 0;
}
