#include <bits/stdc++.h> 
using namespace std; 

int div(long long int n) 
{ 
    long long sum=0;
    vector<int> v; 
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i==0) 
        { 
            if (n/i == i) 
            {
                sum+=i;
            }
            else
            { 
                sum+=i;
                v.push_back(n/i); 
            } 
        } 
    } 
    for (int i=v.size()-1; i>=0; i--) 
    {
        sum+=v[i];
    }
    if (n == 1)return 1;
    return sum - n ;
} 

int main() 
{ 
    int t;
    while(cin>>t)
    {
        long long s = div(t);
        if(s == t)
            cout<<t<<" perfect\n";
        else if (abs(t-s) <=2)
            cout<<t<<" almost perfect\n";
        else
            cout<< t <<" not perfect\n";
    }
    return 0; 
} 
