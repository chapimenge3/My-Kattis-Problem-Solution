#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sortall(x) sort(all(x))
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

#define all(x) x.begin(), x.end()

void compute(string pat, int *lsp)
{
    int plen = pat.length();
    int len = 0;
    int i = 1;
    lsp[0] = 0;
    while (i < plen)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lsp[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lsp[len - 1];
            }
            else
            {
                lsp[i] = 0;
                i++;
            }
        }
    }
}

void KMP(string text, string pat)
{
    int plen = pat.length();
    int tlen = text.length();

    int lsp[plen];
    compute(pat, lsp);
    int i = 0, j = 0;
    while (i < tlen)
    {
        if (pat[j] == text[i])
        {
            i++;
            j++;
        }
        if (j == plen)
        {
            cout << i - j << " ";
            j = lsp[j - 1];
        }
        else if (i < tlen && pat[j] != text[i])
        {
            if (j != 0)
            {
                j = lsp[j - 1];
            }
            else
            {
                i++;
            }
        }
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string pat, text;
    while (getline(cin, pat))
    {
        getline(cin, text);
        KMP(text, pat);
    }
}
