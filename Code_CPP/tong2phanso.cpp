#include <bits/stdc++.h>

using ll = long long;
using namespace std;

struct PhanSo{
    ll tu;
    ll mau;
};

void nhap (PhanSo &x){
    cin >> x.tu >> x.mau;
}

PhanSo tong(PhanSo p, PhanSo q){
    PhanSo tong;
    tong.tu=p.tu*q.mau+q.tu*p.mau;
    tong.mau=p.mau*q.mau;
    ll uc = __gcd(tong.tu,tong.mau);
    tong.tu/=uc;
    tong.mau/=uc;
    return tong;
}

void in(PhanSo x){
    cout << x.tu << "/" << x.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}