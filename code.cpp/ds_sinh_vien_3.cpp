#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct SinhVien{
    string msv = "B20DCCN";
    string hoten;
    string lop;
    string date;
    float diem;
};

void chuanhoamsv(string &s,int i){
    string x=to_string(i);
    if (x.size()==1) s=s+"00"+x;
    else s=s+"0"+x;
}
void chuanhoa(string &s){
    if (s.size()==8) s='0'+s.substr(0,2)+'0'+s.substr(2);
    else if (s.size()==9){
        if (s[1]=='/') s='0'+s;
        else s=s.substr(0,3)+'0'+s.substr(3);
    }
}

bool sx(SinhVien &a, SinhVien &b){
    return a.diem > b.diem;
}

void chuanhoaTen(string &s){
    for (auto &ch : s) ch=tolower(ch);
    vector <string> v;
    istringstream iss(s);
    string word;
    while (iss >> word) v.push_back(word);
    s.clear();
    for (int i=0;i<v.size();i++) v[i][0]=toupper(v[i][0]);
    for (int i=0;i<v.size();i++) s+=v[i]+" ";
}
void nhap(SinhVien ds[],int n){
    for (int i=0;i<n;i++){
        chuanhoamsv(ds[i].msv,i+1);
        cin.ignore();
        getline(cin,ds[i].hoten);
        chuanhoaTen(ds[i].hoten);
        cin >> ds[i].lop;
        cin >> ds[i].date;
        chuanhoa(ds[i].date);
        cin >> ds[i].diem;
    }
}

void sapxep(SinhVien ds[],int n){
    sort(ds,ds+n,sx);
}
void in(SinhVien ds[],int n){
    for (int i=0;i<n;i++){
        cout << ds[i].msv << " " << ds[i].hoten << " ";
        cout << ds[i].lop << " " << ds[i].date << " ";
        cout << setprecision(2) << fixed << ds[i].diem << endl;
    }
}


int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}