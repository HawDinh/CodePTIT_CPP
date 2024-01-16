//dùng string lưu kq
#include <bits/stdc++.h>
using namespace std;

void TestCase(){
    string a,b; cin >> a >> b;
    int A=a.size()-1;
    int B=b.size()-1;
    int n=max(A,B);
    string res = "";
    int nho=0;

    while (a.size()<=n) a="0"+a;
    while (b.size()<=n) b="0"+b;

    for (int i=n;i>=0;i--){
        int k=(a[i]-'0') + (b[i]-'0') + nho;
        nho=0;
        if (k>9){
            k-=10;
            nho=1;
        }
        res = char(k + '0') + res;
    }
    if(nho==1){
        cout << 1 << res;
    }
    else{
        cout << res;
    }
    cout << endl;
}

int main(){
    int t; cin >> t;
    while (t--){
    TestCase();
    }
}