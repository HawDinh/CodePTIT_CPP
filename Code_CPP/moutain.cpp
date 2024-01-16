#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
typedef long long ll;

int a[10004];
int check(int l,int r){
    for (int i=l;i<r;i++){
        if (a[i]>a[i+1]){
            for (int j=i+1;j<r;j++){
                if (a[j]<a[j+1]) return 0;
            }
        }
    }
    return 1;
}
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        for (int i=0;i<n;i++) cin >> a[i];
        int l,r; cin >> l >> r;
        if (check(l,r)==1) cout << "Yes\n";
        else cout <<"No\n";
    }
}