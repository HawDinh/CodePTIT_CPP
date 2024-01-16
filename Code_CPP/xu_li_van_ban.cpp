#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void TestCase(){
    string s; 
    vector <string> v;

    while (cin >> s){
        for (int i=0;i<s.size();i++) s[i]=tolower(s[i]);
        v.push_back(s);
    }

    int hoa=1;

    for (int i=0;i<v.size();i++){
        if (hoa==1) {
            v[i][0]=toupper(v[i][0]);
            hoa=0;
        }
        char s=v[i][v[i].size()-1];
        if (s=='.'||s=='?'||s=='!'){
            v[i].pop_back();
            hoa=1;
            cout << v[i] << endl;
        }
        else cout << v[i] << " ";
    }
}
int main()
{
    
        TestCase();
    return 0;
}