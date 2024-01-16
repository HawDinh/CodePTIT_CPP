#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
using ll = long long;

int nt(int n){
    if (n<2) return 0;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0) return 0;
    } return 1;
}

int main(){
    int t; cin >> t; 
    while (t--){
        int n,k; cin >> n >> k;
        int dem=0;
        for (int i=2;i<=n;i++){
            while (n%i==0){
            ++dem;
            n/=i;
            if (dem==k) {
                cout << i;
                break;
            }
            }
        }
        if (dem<k) cout << "-1";
        cout << endl;
    }
}
