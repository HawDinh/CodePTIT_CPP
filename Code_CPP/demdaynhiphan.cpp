#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
typedef long long ll;

int main(){
     int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a1[n],a2[n];
        for (int i=0;i<n;i++) cin >> a1[i];
        for (int i=0;i<n;i++) cin >> a2[i];
        int kq=0;
        for (int i=0;i<n;i++){
        int sum1=0, sum2=0;
        for (int j=i;j<n;j++){
        sum1+=a1[j];
        sum2+=a2[j];
        if (sum1==sum2) kq=max(kq,j-i+1);
        }
        }
        cout << kq << endl;
    }
}
