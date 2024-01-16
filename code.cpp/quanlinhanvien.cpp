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

struct NhanVien{
    string mnv="00001";
    string ten;
    string gt;
    string date;
    string diachi;
    string thue;
    string datehd;
};

void chuanhoa(string &s){
    if (s.length()==8){
        s='0'+s.substr(0,2)+'0'+s.substr(2);
    }
    else if (s.length()==9){
        if (s[1]=='/') s='0'+s;
        else s=s.substr(0,3) + '0' + s.substr(3);
    }
}

void nhap(NhanVien &x) {
    getline(cin, x.ten);
    getline(cin, x.gt);
    getline(cin, x.date);
    chuanhoa(x.date);
    getline(cin, x.diachi);
    getline (cin,x.thue);
    getline(cin, x.datehd);
    chuanhoa(x.datehd);
}

void in(NhanVien x){
    cout << x.mnv << " " << x.ten << " " << x.gt << " " << x.date << " " << x.diachi << " " << x.thue << " " << x.datehd;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}