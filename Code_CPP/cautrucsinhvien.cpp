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

struct SinhVien{
    string msv={"B20DCCN001"};
    string ten;
    string lop;
    string ngay;
    float gpa;
};

void nhap(SinhVien &x){
    getline (cin,x.ten);
    cin >> x.lop >> x.ngay >> x.gpa;
    if (x.ngay.length()==8){
        x.ngay='0' + x.ngay.substr(0,2) + '0' + x.ngay.substr(2);
    }
    else if (x.ngay.length()==9){
        if (x.ngay[1]=='/') x.ngay = '0' + x.ngay;
        else x.ngay = x.ngay.substr(0,3) + '0' + x.ngay.substr(3);
    }
}

void in(SinhVien x){
    cout << x.msv << " " << x.ten << " " << x.lop << " " << x.ngay << " " << fixed << setprecision(2) << x.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}

