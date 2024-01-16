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

void chuanhoa(string &s){
    if (s.size()==8) s='0'+s.substr(0,2)+'0'+s.substr(2);
    else if (s.size()==9){
        if (s[1]=='/') s='0'+s;
        else s=s.substr(0,3)+'0'+s.substr(3);
    }
}

struct SinhVien{
    string msv="B20DCCN001";
    string ten;
    string lop;
    string ngay;
    float gpa;

    // Toán tử nhập tùy chỉnh
    friend istream& operator>>(istream& is, SinhVien& sv) {
        getline(is, sv.ten);
        getline(is, sv.lop);
        getline(is, sv.ngay);
        chuanhoa(sv.ngay);
        is >> sv.gpa;
        return is;
    }

    // Toán tử xuất tùy chỉnh
    friend ostream& operator<<(ostream& os, const SinhVien& sv) {
        os << sv.msv << " " << sv.ten << " " << sv.lop << " " << sv.ngay << " " << fixed << setprecision(2) << sv.gpa;
        return os;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}