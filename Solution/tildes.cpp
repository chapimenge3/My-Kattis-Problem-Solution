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
vector<int> arr(1000000 + 9), rank_(1000000 + 9, 1);

int find(int x)
{
    if (arr[x] == x)
        return x;
    arr[x] = find(arr[x]);
    return arr[x];
}
void un(int A, int B)
{
    // cout << "union " << A << " " << B << " => rank A = " << rank_[find(A)] << " Rank B = " << rank_[find(B)] << " Total = ";
    int a = find(A), b = find(B);
    if( a== b){
        return;
    }
    rank_[b] = rank_[b] + rank_[a];

    arr[a] = b;
    // cout << rank_[find(A)] << endl;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    iota(all(arr), 0);
    int n, q;
    cin >> n >> q;
    char x;
    int a, b;
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        if (x == 's')
        {
            cin >> a;
            cout << rank_[find(a)] << endl;
        }
        else
        {
            cin >> a >> b;
            un(a, b);
        }
    }
}
