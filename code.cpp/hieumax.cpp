#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
    int n; cin >> n;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    int maxval=-100000;
    int minval=a[0];
    for (int i=1;i<n;i++){
        if (a[i]>minval) maxval=max(maxval,a[i]-minval);
        minval=min(a[i],minval);
    }
    if (maxval==-100000) cout << "-1" << endl;
    else cout  << maxval << endl;
    }
}