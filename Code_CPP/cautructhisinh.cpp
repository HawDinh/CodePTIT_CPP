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

struct ThiSinh {
    string ten;
    string date;
    float mon1;
    float mon2;
    float mon3;
    float tong;
};

void nhap (ThiSinh &A){
    getline (cin,A.ten);
    cin.ignore();
    cin >> A.date;
    cin.ignore();
    cin >> A.mon1 >> A.mon2 >> A.mon3;
    A.tong = A.mon1 + A.mon2 + A.mon3;
}

void in (ThiSinh &A){
    cout << A.ten << " " << A.date << " " << fixed << setprecision(1) << A.tong;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
