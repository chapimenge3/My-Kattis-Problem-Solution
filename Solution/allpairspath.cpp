#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;
const int iinf = 1e9 + 10;
const ll  inf  = 1e18 + 10;
#define enld endl
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastc ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
int main() {
	fastc;
    ll n, m, q;
    while(true) {
        cin >> n >> m >> q;
        if(n == 0 && m == 0 && q == 0) {
            break;
        }
        vector<vector<ll>> v;
        v.resize(n, vector<ll>(n, inf));
        for(ll i = 0; i < n; i++) {
            v[i][i] = 0;
        }
        for(ll i = 0; i < m; i++) {
            ll n1, n2, w;
            cin >> n1 >> n2 >> w;

            v[n1][n2] = min(v[n1][n2], w);
        }
        for(ll k = 0; k < n; k++) {
            for(ll i = 0; i < n; i++) {
                for(ll j = 0; j < n; j++) {
                    if(v[i][k] < inf && v[k][j] < inf) {
                        v[i][j] = min(v[i][j], v[i][k] + v[k][j]);
                    }
                }
            }
        }
        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < n; j++) {
                for(ll k = 0; k < n; k++) {
                    if(v[k][k] < 0 && v[i][k] != inf && v[k][j] != inf) {
                        v[i][j] = -inf;
                    }
                }
            }
        }
        for(ll i = 0; i < q; i++) {
            ll n1, n2;
            cin >> n1 >> n2;

            if(v[n1][n2] == inf) {
                cout << "Impossible" << endl;
                continue;
            }

            if(v[n1][n2] == -inf) {
                cout << "-Infinity" << endl;
                continue;
            }
            cout << v[n1][n2] << endl;
        }
        cout << endl;
    }
}
