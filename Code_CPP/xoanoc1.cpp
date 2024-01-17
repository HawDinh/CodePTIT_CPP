#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;

int main(){
    int t; cin >> t;
    while (t--){
        int n,m; cin >> n >> m;
        int a[n][m];
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++) cin >> a[i][j];
        }
        int l=0,r=m-1;
        int up=0, down=n-1;
        int dem=0;
        while (dem<n*m){
            for (int i=l;i<=r;i++){
            cout << a[up][i] << " ";
            ++dem;
            }
            up++;
            if (dem == n * m) break;

            for (int i=up;i<=down;i++){
                cout << a[i][r] << " ";
                ++dem;
            }
            r--;
            if (dem == n * m) break;

            for (int i=r;i>=l;i--){
                cout << a[down][i] << " ";
                ++dem;
            }
            down--;
            if (dem == n * m) break;

            for (int i=down;i>=up;i--){
                cout << a[i][l] << " ";
                ++dem;
            }
            l++;
            if (dem == n * m) break;
        }
        cout << endl;
    }
        
}
