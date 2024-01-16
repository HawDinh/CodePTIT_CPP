#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <set>
#include <unordered_map>
#include <map>
#include <set>

using ll = long long;
using namespace std;

class PhanSo {
private: 
    ll tu;
    ll mau;

public:
PhanSo (ll t=0, ll m=1){
    tu = t;
    mau = m;
}

void rutgon(){
    ll uc=__gcd(tu,mau);
    tu/=uc;
    mau/=uc;
}

friend istream &operator >> (istream &in,PhanSo &a){
    return in >> a.tu >> a.mau;
}

friend ostream &operator << (ostream &out,PhanSo a){
    return out << a.tu << '/' << a.mau;
}

PhanSo operator + (PhanSo b){
    PhanSo c;
    c.tu = tu * b.mau + mau * b.tu;
    c.mau=mau*b.mau;
    c.rutgon();
    return c;
}
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}