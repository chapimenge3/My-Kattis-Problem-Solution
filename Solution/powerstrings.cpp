#include <bits/stdc++.h> 
using namespace std;
void computeLPSArray(string pat, int M, int* lps); 

int KMPSearch(string pat, string txt,int M, int N) 
{
    int cou = 0 ;
	int lps[M]; 
	computeLPSArray(pat, M, lps); 
	int i = 0; 
	int j = 0; 
	while (i < N) { 
		if (pat[j] == txt[i]) { 
			j++; 
			i++; 
		} 

		if (j == M) { 
			cou++;
			j = lps[j - 1]; 
		} 

	
		else if (i < N && pat[j] != txt[i]) { 
			
			if (j != 0) 
				j = lps[j - 1]; 
			else
				i = i + 1; 
		} 
	} 
	return cou;
} 

void computeLPSArray(string pat, int M, int* lps) 
{ 

	int len = 0; 

	lps[0] = 0; 

	
	int i = 1; 
	while (i < M) { 
		if (pat[i] == pat[len]) { 
			len++; 
			lps[i] = len; 
			i++; 
		} 
		else 
		{ 
			if (len != 0) { 
				len = lps[len - 1]; 

			
			} 
			else  
			{ 
				lps[i] = 0; 
				i++; 
			} 
		} 
	} 
} 

int main() 
{
    string pat ;
	string txt;
	while(cin>>pat && pat != ".")
	{
	    txt = pat + pat;
    	int M = pat.length() , N = txt.length();
    	cout<< KMPSearch(pat, txt, M,N)-1<<endl; 
	}
	return 0; 
} 
