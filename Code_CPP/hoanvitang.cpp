#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
typedef long long ll;

int n,k,ok=1,a[100001];

void sinh(){
    int i=n-1;
    while (i>0 && a[i]>a[i+1]) --i;

    if (i==0) ok=0;

    else {
        k=n;
        while (a[k]<a[i])--k;
        swap(a[i],a[k]);

        int l=i+1;
        int r=n;
        while (l<r) {
        swap(a[l],a[r]);
        ++l;
        --r;
        }
    }
}

int main(){
    cin >> n;
    for (int i=1;i<=n;i++) a[i]=i;

    for (int i=1;i<=n;i++) cout << a[i];
    cout << endl;

    while (ok){
        sinh();
        for (int i=1;i<=n;i++) cout << a[i];
        cout << endl;
    }
    return 0;
}