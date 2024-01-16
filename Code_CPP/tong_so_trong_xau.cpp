#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void TestCase(){
    string s; cin >> s;
    int kq=0;
    int so=0;
    int i=0;
    while (i<s.size()){
        if (isdigit(s[i])) so=so*10+(s[i]-'0');
        else {
            kq+=so;
            so=0;
        }
        if (i==s.size()-1) kq+=so;
        i++;
    }
    cout << kq << endl;
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