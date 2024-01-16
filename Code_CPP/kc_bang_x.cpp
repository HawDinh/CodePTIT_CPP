#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void TestCase(){
    int n,k; cin >> n >> k;
    int a[n];
    set <int> st;
    for (int i=0;i<n;i++) {
        cin >> a[i];
        st.insert(a[i]);
    }
    int ok=0;

    for (int i=0;i<n;i++){
        int x=a[i]+k;
        if(st.find(x)!=st.end()) {
            ok=1;
            break;
        }
    }

    if (ok==1) cout << "1\n";
    else cout << "-1\n";
 }
int main()
{
    int t; cin >> t;
    while (t--){
        TestCase();
    }
}