#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <set>
#include <unordered_map>
#include <map>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--){
        string s;
        cin >> s;
        int sum=0;
        long long lt=1;
        for (int i=s.size()-1;i>=0;i--){
                sum+=(s[i]-'0')*lt;
                lt*=2;
                lt%=10;
                sum%=10;
        }
        if (sum%5==0) cout << "Yes\n";
        else cout << "No\n";
    }
}
