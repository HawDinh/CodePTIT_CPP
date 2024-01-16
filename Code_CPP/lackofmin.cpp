#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>
#include <string>
#include <iomanip>
#include <set>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t; 
    while (t--){
    int n; cin >> n;
    int a[n];
    set <int> se;
    for (int i=0;i<n;i++){
        cin >> a[i];
        if (a[i]>0) se.insert(a[i]);
    }

    int min=1;
    int ok=0;
    for (auto x:se){
        if (x==min) {
        ++min;
        }
        else {
        cout << min << endl;
        ok=1;
        break;
        }
    }
    if (ok==0) cout << min << endl;
    }
}