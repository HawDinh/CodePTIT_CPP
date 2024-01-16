#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct hang{
   int ma;
   string ten;
   string nhom;
   float giamua;;
   float giaban;
};

void nhap(hang ds[],int n){
    for (int i=0;i<n;i++){
        ds[i].ma=i+1;
        cin.ignore();
        getline(cin,ds[i].ten);
        getline(cin,ds[i].nhom);
        cin >> ds[i].giamua >> ds[i].giaban;
    }
}

bool sx(hang a, hang b){
    return a.giaban - a.giamua>b.giaban-b.giamua;
}
void sapxep(hang ds[],int n){
    sort (ds,ds+n,sx);
}

void in(hang ds[],int n){
    for (int i=0;i<n;i++){
        cout << ds[i].ma << " " << ds[i].ten << " " << ds[i].nhom << " " << setprecision(2) << fixed << ds[i].giaban-ds[i].giamua << endl;
    }
}


int main(){
    int N;
    cin >> N;
    hang ds[N];
    nhap(ds, N);
    sapxep(ds, N);
    in(ds, N);
    return 0;
}