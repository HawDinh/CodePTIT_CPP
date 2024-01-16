#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <set>
#include <unordered_map>

using namespace std;

int main() {
    int t; cin >> t;
    cin.ignore();
    while (t--){
    string a;
    getline(cin, a);
    unordered_map <char, int> mp;
    set <char> duynhat;

    for (char x:a){
        mp[x]++;
        if (mp[x]==1) duynhat.insert(x);
        else duynhat.erase(x);
    }

    for (auto x:a){
        if (duynhat.find(x)!=duynhat.end()) cout << x;
    }
    cout << endl;
    }
}
