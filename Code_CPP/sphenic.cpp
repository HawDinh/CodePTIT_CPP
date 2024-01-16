#include <bits/stdc++.h>

using ll = long long;
using namespace std;

bool snt (int n){
    if (n==0 || n==1) return 0;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0) return 0;
    }
    return 1;
}

int check(int n){
    vector <int> v;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            while (n%i==0){
                v.push_back(i);
                n/=i;
            }
        }
        if (n==1) break;
    }
    if (n>1) v.push_back(n);
    if (v.size()==3 && v[0]!=v[1]&&v[1]!=v[2]&&v[0]!=v[2]) return 1;
    else return 0;
    
}

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        if (check(n)) cout << 1 << endl;
        else cout << 0 << endl;
    }
}