#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int stt=1;

struct NhanVien{
    string mnv;
    string ten;
    string gioitinh;
    string date;
    string diachi;
    string thue;
    string datehd;
};

void chuanhoama(string &s,int i){
    if (i<10) s="0000"+to_string(i);
    else s="000"+to_string(i);
}
void nhap (NhanVien &a){
        scanf ("\n");
        chuanhoama(a.mnv,stt);
        stt++;
        getline(cin,a.ten);
        getline(cin,a.gioitinh);
        getline(cin,a.date);
        getline(cin,a.diachi);
        getline(cin,a.thue);
        getline(cin,a.datehd);
}

bool sx(NhanVien a, NhanVien b){
    string s1=a.date;
    string s2=b.date;

    int thang1=stoi(s1.substr(0,2));
    int ngay1=stoi(s1.substr(3,2));
    int nam1=stoi(s1.substr(6));

    int thang2=stoi(s2.substr(0,2));
    int ngay2=stoi(s2.substr(3,2));
    int nam2=stoi(s2.substr(6));

    if (nam1<nam2) return 1;
    else if (thang1<thang2 && nam1==nam2) return 1;
    else if (ngay1<ngay2 && thang1==thang2 && nam1==nam2) return 1;
    else return 0;
}
void sapxep (NhanVien a[],int n){
    sort (a,a+n,sx);
}

void inds(NhanVien a[],int n){
    for (int i=0;i<n;i++){
        cout << a[i].mnv << " " << a[i].ten << " " << a[i].gioitinh << " " << a[i].date << " " << a[i].diachi << " " << a[i].thue << " " << a[i].datehd << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}