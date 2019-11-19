#include<bits/stdc++.h>
using namespace std;
long long factors(long long  n)
{
    long long factors = 0;
    long long factor = 2;
    while (factor <= sqrt(n))
    {
        if (n % factor == 0)
        {
            n /= factor;
            factors++;
        }
        else
        {
            factor++;
        }
    }
    return factors + 1;
}

int main()
{
    long long n;
    cin>> n;
    cout<< factors(n) ;
    return 0;
}
