#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t; 
    while (t--){
    int n,m; cin >> n >> m;
    int a[n][m];
    
    multimap <int,int> mp;

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin >> a[i][j];
            if (a[i][j]==1) mp.insert({i,j});
        }
    }

    for (auto x:mp){
        for (int i=0;i<n;i++) a[i][x.second]=1;
        for (int i=0;i<m;i++) a[x.first][i]=1;
    }

for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    }
}