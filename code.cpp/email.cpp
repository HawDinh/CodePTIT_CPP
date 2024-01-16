#include <bits/stdc++.h>
#include <math.h>
using ll = long long;
using namespace std;

int main(){
    string s; getline(cin,s);

    for (int i=0;i<s.size();i++) s[i]=tolower(s[i]);

    vector <string> v;
    istringstream iss(s);
    string word;

    while (iss >> word) v.push_back(word);

    string ten=v.back();
    for (int i=0;i<v.size()-1;i++){
        ten+=v[i][0];
    }
    
    cout << ten << "@ptit.edu.vn";
}
