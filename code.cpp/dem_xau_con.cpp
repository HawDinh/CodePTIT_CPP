#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void TestCase(){
    string s; cin >> s;
    int k; cin >> k;
    int dem=0;
    for (int i=0;i<s.size();i++){
        set <char> st;
        for (int j=i;j<s.size();j++){
            st.insert(s[j]);
            if(st.size()==k){
                dem++;
            }
        }
    }
    cout << dem << endl;
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