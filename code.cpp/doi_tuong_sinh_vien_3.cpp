#include <bits/stdc++.h>
using namespace std;
int stt=1;
class SinhVien{
public:
    string msv;
    string ten;
    string lop;
    string date;
    float gpa;

friend ostream& operator<<(ostream& out, SinhVien& a){
    cout << a.msv << " " << a.ten << " " << a.lop << " " << a.date << " " << setprecision(2) << fixed << a.gpa << endl;
    return out;
}

void chuanhoamsv(string &s,int i){
    if (i<10) s="B20DCCN00"+to_string(i);
    else s="B20DCCN0"+to_string(i);
} 

void chuanhoaten(string &s){
    for (int i=0;i<s.size();i++) s[i]=tolower(s[i]);
    istringstream iss(s);
    string word;
    vector <string> v;

    while (iss>>word){
        v.push_back(word);
    }
    
    for (int i=0;i<v.size();i++) v[i][0]=toupper(v[i][0]);

    s.erase();

    for (auto x:v) s=s+x+" ";
}

void chuanhoadate(string &s){
    if (s.size()==8) s='0'+s.substr(0,2)+'0'+s.substr(2);
    else if(s.size()==9){
        if (s[1]=='/') s='0'+s;
        else s=s.substr(0,3)+'0'+s.substr(3);
    }
}

friend istream& operator>>(istream& in, SinhVien& a){
    a.chuanhoamsv(a.msv,stt++);
    scanf("\n");
    getline(in,a.ten);
    a.chuanhoaten(a.ten);
    getline(in,a.lop);
    getline(in,a.date);
    a.chuanhoadate(a.date);
    in >> a.gpa;
    return in;
}

};

bool sx(SinhVien &a, SinhVien &b){
    return a.gpa > b.gpa;
}
void sapxep(SinhVien ds[],int n){
    sort(ds,ds+n,sx);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
