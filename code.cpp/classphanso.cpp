#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <set>
#include <unordered_map>
#include <map>
#include <set>

using ll = long long;
using namespace std;

class PhanSo {

public:
    ll tu;
    ll mau;
    
    PhanSo(ll t, ll m): tu(t), mau(m) {}

void rutgon(){
    ll uc=__gcd(tu,mau);
    tu/=uc;
    mau/=uc;
}

friend istream& operator>>(istream &in,PhanSo &a){
    in >> a.tu >> a.mau;
    return in;
}

friend ostream& operator<<(ostream &out,PhanSo a){
    out << a.tu << '/' << a.mau;
    return out;
}
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}