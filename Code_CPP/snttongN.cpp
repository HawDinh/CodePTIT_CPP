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
        int n; cin >> n;
        int ok=0;
        for (int i=2;i<=n-2;i++){
        if (nt(i) && nt(n-i)){
            ok=1;
            cout << i << " " << n-i << endl;
            break;
        }
        }
        if (ok==0) cout << "-1" << endl;
    }
}