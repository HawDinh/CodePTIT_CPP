#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll pow (ll a, ll b, ll m){
    if (b==0) return 1;
    if (b==1) return a%m;
    ll t=pow(a,b/2,m);
    ll kq=t*t%m;
    if (b%2==0) return kq;
    return kq*a%m;
}
void TestCase(){
    string a; cin >> a;
    ll b,m; cin >> b >> m;
    ll kq=0;
    for (auto x:a){
    kq=kq*10+(x-'0');
    kq%=m;
    }
    cout << pow(kq,b,m) << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}