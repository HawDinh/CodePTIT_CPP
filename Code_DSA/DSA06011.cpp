#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        int ans=INT_MAX;
        for (int i=0;i<n-1;i++){
            for (int j=i+1;j<n;j++){
                int x=a[i]+a[j];
                if (abs(x)<abs(ans)){
                    ans=x;
                }
            }
        }
        cout << ans << endl;
    }
}
