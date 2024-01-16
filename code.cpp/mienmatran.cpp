#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
typedef long long ll;

int n,m;
int a[100][100];
int X[8]={-1,-1,-1,0,0,1,1,1};
int Y[8]={-1,0,1,-1,1,-1,0,1};

void BFS(int r,int c){
    for (int i=0;i<8;i++){
        int x=r+X[i];
        int y=c+Y[i];
    if (x>=0 && x<n && y>=0 && y<m && a[x][y]==1){
        a[x][y]=0;
        BFS(x,y);
    }
    }
}

int main(){
    int t; cin >> t;
    while (t--){
    cin >> n >> m;
    int dem=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (a[i][j]==1) {
                dem++;
                BFS(i,j);
            }
        }
    }
    cout << dem << endl;
    }
}