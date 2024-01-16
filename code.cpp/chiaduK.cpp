#include <bits/devc++.h>
#include <algorithm>
#include <map>
#include <cmath>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t; 
    while (t--){
    ll n,k; cin >> n >> k;
    ll S=0;

    S=((n/k)*(k*(k-1))/2)+((n%k)*(n%k+1)/2);

    cout << S << endl;
    }
}
