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
    cin.ignore();
    while (t--){
        string s,s1; getline(cin,s);
        stack <string> st;
        stringstream ss(s);
        while (ss >> s1){
            st.push(s1);
        }
        while (!st.empty()){
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
}
