/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int> s;
    for(int i = 0 ; i < n ;i++)
    {
        int a,b;
        cin>>a>>b;
        for(int  i =a ; i<=b;i++)
        {
            s.insert(i);
        }
    }
    cout<<s.size();
    return 0;
}
