
#include <bits/stdc++.h>
#define endl '\n'
typedef long long ll;
using namespace std;

int check(string s){
    int a=s[5]-'0';
    int b=s[6]-'0';
    int c=s[7]-'0';
    int d=s[9]-'0';
    int e=s[10]-'0';

    if (a<b && b<c && c<d && d<e) return 1;
    else if (a==b && b==c && d==e) return 1;
    else if ((a==6 || a==8) && (b==6 || b==8) && (c==6 || c==8) && (d==6 || d==8) && (e==6 || e==8)) return 1;
    else return 0;
}
int main (){
    int t; cin >> t;
    while (t--){
       string s; cin >> s;
       if (check(s)) cout << "YES\n";
       else cout << "NO\n";
    }
}