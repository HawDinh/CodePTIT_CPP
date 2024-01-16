#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <set>
#include <unordered_map>
#include <map>
#include <set>

using ll = long long;
using namespace std;

int n,a[100],ok;

void ktao(){
    for (int i=1;i<=n;i++) a[i]=0;
}

void sinh(){
    int i=n;
    while (i>0 && a[i]==1){
        a[i]=0;
        --i;
    }
    if (i==0) ok=0;
    else {
        a[i]=1;
    }
}

int main(){
    int t; cin >> t;
    while (t--){
    cin >> n;
    ktao();
    ok=1;
    while (ok){
        for (int i=1;i<=n;i++) cout << a[i];
        cout << " ";
        sinh();
    }
    cout << endl;
    }
}