#include <vector>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <set>
#include <unordered_map>
#include <map>

using ll = long long;
using namespace std;

int check(string s){
    int dem=s.size();
    for (int i=0;i<s.size()-1;i++){
        for (int j=i+1;j<s.size();j++){
        if (s[i]==s[j]) ++dem;
    }
    }
    return dem;
}

int main(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        cout << check(s) << endl;
    }
}
