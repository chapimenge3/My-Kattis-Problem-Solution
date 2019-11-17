#include <bits/stdc++.h>
using namespace std;

const int n = 2000000;
vector<bool> prime(n+9); 
vector<int> nonpri (n+9,1) ; 

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    for (int p=2; p*p<=n; p++) 
	{  
		if (prime[p] == false) 
		{ 
			for (int i=p+p; i<=n; i += p) 
				prime[i] = true; 
		} 
	}

    for (int p=2; p <= n ; p++) 
	{  
		if (prime[p]) 
		{ 
			for(int i = p ; i <= n; i += p) 
            {
                nonpri[i] += 1; 
            }
				
		} 
	}

    int c;
    cin>>c;
    for(int i = 0 ; i < c; i++)
    {
        int x ;
        cin>>x;
        cout<<nonpri[x]<<"\n";
    }


    return 0;
}
