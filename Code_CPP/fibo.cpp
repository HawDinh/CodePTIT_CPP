#include <iostream>
#include <algorithm>
using namespace std;

int f[1000];

void khoitao(){
    int fibo[20];
    fibo[0]=0;
    fibo[1]=1;
    for (int i=2;i<20;i++) fibo[i]=fibo[i-1]+fibo[i-2];    
    for (int i=0;i<20;i++) f[fibo[i]]=1;
}

int main(){
    khoitao();
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        for (int i=0;i<n;i++) {
        if (f[a[i]]==1) cout << a[i] << " ";
        }
        cout << endl;
    }
}