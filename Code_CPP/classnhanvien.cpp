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

class NhanVien{
string mnv="00001";
string ten;
string gt;
string ngay;
string diachi;
string thue;
string hd;

friend istream &operator >> (istream &in, NhanVien &a){
    getline (in,a.ten);
    getline (in,a.gt);
    getline (in,a.ngay);
    getline (in,a.diachi);
    getline (in,a.thue);
    getline (in,a.hd);
    return in;
}

friend ostream &operator << (ostream &out,NhanVien a){
    out << a.mnv << " " << a.ten << " " << a.gt << " " << a.ngay << " " << a.diachi << " " << a.thue << " " << a.hd;
    return out;
}
};

int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}