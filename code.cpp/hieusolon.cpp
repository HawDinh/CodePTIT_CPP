
// dùng stack lưu kq
#include <bits/stdc++.h>
#define endl '\n'
typedef long long ll;
using namespace std;

int main (){
    int t; cin >> t;
    while (t--){
       string a,b; cin >> a >> b;

       stack <int> st;
       
       if (a.size()<b.size()) doi(a,b);
       else if(a.size()==b.size() && a[0]<b[0]) swap(a,b);

       int i=a.size()-1;
       int j=b.size()-1;
       int nho=0;

       while (j>=0){
        int k=(a[i]-'0') - (b[j]-'0')-nho;
        nho=0;
        if (k<0){
            nho=1;
            k=10+k;
        }
        st.push(k);
        --i;
        --j;
       }

       while (i>=0){
        int k=(a[i]-'0')-nho;
        nho=0;
        if (k<0){
            nho=1;
            k=10+k;
        }
        st.push(k);
        --i;
       }

        while (!st.empty()){
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
}