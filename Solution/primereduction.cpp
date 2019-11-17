#include<bits/stdc++.h>
using namespace std; 

long long rprime(long long n )
{
    map<long long,long long> m;
    long long p = 2;
    long long c=0;
    long long k = 0;
    while (n%2 == 0 && n!=1)
    {
        n = n/2;
        m[p]++;
    }
   for(long long p = 3 ; p *p <= n ;p+=2)
   {
       while (n%p == 0)
       {
           n = n / p;
           m[p]++;

       } 
   }
   long long res = 0;
    if(n>2)
    {
        m[n]++;
    }
    for(auto i : m)
    {
        // cout<< i.first<<" "<<i.second<<endl;
       res += i.first*i.second;
    }
    return res;
}
bool isPrime(int n) 
{  
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 
int main() 
{
    ios_base::sync_with_stdio(false);//cin.tie();
    int n ;
    while (cin>>n && n!= 4)
    {
        int x = 1;
        while(!isPrime(n))
        {
             n = rprime(n);
             x++;
        }
        cout<< n << " " << x <<"\n";
    }
    
    return 0; 
}