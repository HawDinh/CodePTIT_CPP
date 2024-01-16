#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll lcm(ll a, ll b){
    return (a*b)/__gcd(a, b);
}

int main(){
    int t; cin >> t;
    while (t--){
    int x, y,z;
    ll n;
    cin >> x >> y  >> z >> n;
    ll bc=lcm(x,lcm(y,z));

    ll l=pow(10,n-1);
    ll r=pow(10,n)-1;

    if (bc>r) cout << "-1\n";
    
    else if (l%bc==0) cout << l << endl;

    else {
        ll d=l/bc;
        cout << bc*(d+1) << endl;
    }
    }
}