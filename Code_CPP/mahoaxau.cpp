#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <set>
#include <unordered_map>
#include <map>

using ll = long long;
using namespace std;


int main(){
    int t; cin >> t;
    cin.ignore();
    while (t--){
        string s; cin >> s;
        for (int i=0;i<s.size();i++){
            int dem=1;
            while (s[i+1]==s[i]){
                ++dem;
                s.erase(i+1,1);
            }
            cout << s[i] << dem;
        }
        cout << endl;
    }
}