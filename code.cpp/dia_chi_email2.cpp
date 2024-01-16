#include <bits/stdc++.h>
using namespace std;
using ll = long long;

map <string,int> mp;

void TestCase(){
    string s; getline(cin,s);
    vector <string> v;

    for (auto &x:s) x=tolower(x);
    
    istringstream iss(s);
    string word;
    while (iss >> word) v.push_back(word);

    string ten=v.back();
    for (int i=0;i<v.size()-1;i++) ten+=v[i][0];
    mp[ten]++;
    
    if (mp[ten]==1) cout << ten << "@ptit.edu.vn" << endl;
    else cout << ten << mp[ten] << "@ptit.edu.vn" << endl;
}
int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        TestCase();
    }
    return 0;
}