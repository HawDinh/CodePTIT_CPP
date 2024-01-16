#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();

    while(t--){
    string s; cin >> s;
    int ok=1;
    
    for (int i=0;i<s.length()-1;i++){
        if (abs(s[i]-s[i+1])!=1) ok=0;
    }
    if (ok==1) cout << "YES" << endl;
    else cout << "NO" << endl;
    }
}