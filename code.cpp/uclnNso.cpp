#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
using ll = long long;

int nt(ll n){
    if (n<2) return 0;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0) return 0;
    } 
    return 1;
}

int biendoi(ll n){
    ll m=1;
    for (ll i=2;i<=sqrt(n);i++){
        int dem=0;
        while (n%i==0){
        dem++;
        n/=i;
        }
        if (dem>0) m*=i;
    }
    if (n>1) m*=n;
    return m;
}

int main(){
    int t; cin >> t;

    while(t--){
    ll n; cin >> n;
    ll kq=1;
    for (int i=2;i<=n;i++){
    if (kq%i!=0) kq*=biendoi(i);
    }
    cout << kq << endl;
    }
}