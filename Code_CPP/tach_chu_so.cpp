#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void TestCase(){
    string s; cin >> s;
    int sum=0;
    multiset <char> st;
    for (int i=0;i<s.size();i++){
        if (!isdigit(s[i])) st.insert(s[i]);
        else sum+=(s[i]-'0');
    }
    for (auto x:st) cout << x;
    cout << sum << endl;
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