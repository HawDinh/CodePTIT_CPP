#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void TestCase(){
    string n; cin >> n;
    ll m; cin >> m;
    ll kq=0;

    for (auto x:n){
        kq=kq*10 + (x-'0');
        kq%=m;
    }
    cout << kq << endl;
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