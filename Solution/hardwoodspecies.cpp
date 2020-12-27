#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    map<string, int> mp;
    int counter = 0;
    while(getline(cin, str)){
        mp[str]++;
        counter++;
    }

    for(auto i: mp){
        cout << i.first << " " << fixed << setprecision(6) << (i.second * 100.0) / counter << endl;
    }
}
