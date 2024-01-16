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

    void nhap(){
    getline(cin,ten);
    getline(cin,lop);
    getline(cin,ngay);
    chuanhoa(ngay);
    cin >> gpa;
    }

    void xuat(){
    cout << msv << " " << ten << " " << lop << " " << ngay << " " << fixed << setprecision(2) << gpa;
    }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}