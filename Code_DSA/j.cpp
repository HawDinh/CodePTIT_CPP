#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
int a[10001];
int ok;

void ktao(){
    for (int i=1;i<=n;i++) a[i]=n-i+1; 
}

void in(){
    for (int i=1;i<=n;i++) cout << a[i];
    cout << " ";
}

void sinh(){
    int i=n-1;
    while (i>0 && a[i]<a[i+1]) --i;

    if (i==0) ok=0;

    else {
        int k=n;
        while (a[k]>a[i]) --k;
        swap(a[i],a[k]);

        int l=i+1;
        int r=n;
        while (l<r){
            swap(a[l],a[r]);
            ++l;
            --r;
        }
    }
}

int main() {
    int t; cin >> t;
    while (t--){
        cin >> n;
        ok=1;
        ktao();
        in();
        while (ok) {
            sinh();
            if(ok) in();
        }
        cout << endl;
    }
}