
#include <bits/stdc++.h>
#define endl '\n'
typedef long long ll;
using namespace std;

void xuli(string &a){
    int ok=0;
    int i=a.size()-2;
    int j=a.size()-1;
    while (i>=0 && a[i]<=a[i+1]) --i;
    while (j>i && a[j]>=a[i] || j>i && a[j]==a[j-1]) --j;
    if (a[i]>a[j]){
        swap(a[i], a[j]);
        ok=1;
    }
    else a="-1";
}
int main (){
    int t; cin >> t;
    while (t--){
       string s; cin >> s;
        xuli(s);
        cout << s << endl;
    }
}