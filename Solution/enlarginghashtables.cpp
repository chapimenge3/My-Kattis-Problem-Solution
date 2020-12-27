#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long n) 
{ 
    
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
    if (n%2 == 0 || n%3 == 0) return false; 
    for (long long i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
    return true; 
} 
int main()
{
    int t;
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    long long  x,y;
    bool is = false;
    // cout<<isPrime(33);
    while (cin>>x && x)
    {
        is = false;
        if(isPrime(x))
        {
            is =  true;
        }
        y = 2*x;
        while(!isPrime(y))
        {
            y++;
        }
        if(is)
        {
            cout<<y<<"\n";
        }
        else
        {
            cout<< y <<" ("<<x<<" is not prime)\n";
        }
        
    }
    
    
}
