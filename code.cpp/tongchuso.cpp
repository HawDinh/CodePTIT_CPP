#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int tong(int n){
    int sum=0;
    while (n>0){
    sum+=n%10;
    n/=10;
    }
    
    if (sum>9) return tong(sum);
    else return sum;
}

int main(){
    int t; cin >> t;

    while(t--){
    int n; cin >> n;
    int sum=tong(n);
    cout << sum << endl;
    }
}
