#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void TestCase(){
    int a; cin >> a;
    cin.ignore();
    string s; getline(cin,s);

    vector <string> v;
    for (auto &x:s) x=tolower(x);

    istringstream iss(s);
    string word;
    while (iss >> word){
        v.push_back(word);
    }
    for (int i=0;i<v.size();i++) v[i][0]=toupper(v[i][0]);

    string ho=v.front();
    string ten=v.back();

    if (a==1){
        cout << ten << " ";
        for (int i=0;i<v.size()-1;i++) cout << v[i] << " ";
    }
    else {
        for (int i=1;i<v.size();i++) cout << v[i] << " ";
        cout << ho;
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}