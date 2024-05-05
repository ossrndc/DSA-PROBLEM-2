#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    if (a>abs(b-c)) cout << "YES";
    else cout << "NO";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}