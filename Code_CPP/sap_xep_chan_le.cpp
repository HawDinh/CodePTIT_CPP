#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void TestCase(){
    int n,m,p; cin >> n;
    int a[n];
    if (n%2==0){
        m=n/2;
        p=m;
    }
    else {
        m=n/2+1;
        p=n-m;
    }
    int b[m],c[p];
    
    for (int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);

    for (int i=0;i<m;i++) b[i]=a[i];
    for (int i=0;i<p;i++) c[i]=a[i+m];

    int dem=0;
    while(1){
        if (dem<m) cout << b[dem] << " ";
        if (dem<p) cout << c[dem] << " ";
        ++dem;
        if(dem==m) break;
    }
    cout << endl;
 }
int main()
{
    int t; cin >> t;
    while (t--){
        TestCase();
    }
}