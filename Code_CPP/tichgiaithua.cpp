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


int main() {
    int t; cin >> t;
    while (t--){
        int n;
        string s;
        cin >> n >> s;
        int a[10]={0};
        for (auto x:s){
            if (x=='2') a[2]++;
            else if (x=='3') a[3]++;
            else if (x=='4') a[3]++,a[2]+=2;
            else if (x=='5') a[5]++;
            else if (x=='6') a[3]++,a[5]++;
            else if (x=='7') a[7]++;
            else if (x=='8') a[7]++,a[2]+=3;
            else if (x=='9') a[7]++,a[3]+=2,a[2]++;
        }
        for (int i=9;i>=2;i--){
            for (int j=0;j<a[i];j++) cout << i;
        }
        cout << endl;
    }
}