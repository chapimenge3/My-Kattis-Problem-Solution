#include<bits/stdc++.h>

using namespace std;

int main(){
    int X, Y; cin >> X >> Y;
    if (Y == 1 && X == 0){
        cout << "ALL GOOD\n";
    }
    else if (Y == 1){
        cout << "IMPOSSIBLE\n";
    } else {
        double ans = (X*1.0) / (1-Y);
        cout << fixed << setprecision(10) << ans << endl;
    }
}
