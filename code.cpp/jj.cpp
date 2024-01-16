#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int n,k,l,r,a[10001];
int ok=1;

void in(){
    for (int i=1;i<=n;i++) cout << a[i];
    cout << endl;
}

void sinh(){
    int i=n-1;
    while (i>0 && a[i]>a[i+1]) --i;
    if (i==0) ok=0;
    else {
        k=n;
        while (a[k]<a[i]) --k;
        swap(a[i],a[k]);
        l=i+1;
        r=n;
        while (l<r) {
            swap(a[l],a[r]);
            ++l;
            --r;
        }
    }
}

int main(){
    cin >> n;
    for (int i=1;i<=n;i++){
        a[i]=i;
    }
    in();
    while (ok){
        sinh();
        in();
    }
    return 0;
}