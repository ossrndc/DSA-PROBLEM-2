#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a[3];
    int b[3];
    for (int i{0}; i<3; i++) cin >> a[i]; 
    for (int i{0}; i<3; i++) cin >> b[i];
    sort(a,a+3); 
    sort(b,b+3);
    int alice = a[2]+a[1];
    int bob = b[2]+b[1];
    if (alice>bob) cout << "Alice";
    else if (alice<bob) cout << "Bob";
    else cout << "Tie";
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