#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
    int n,k; cin >> n >> k;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    int sum=0;
    for (int i=0;i<k;i++) sum+=a[i];
    int max=sum;
    int idx=0;
    for (int i=k;i<n;i++){
        sum=sum-a[i-k]+a[i];
        if (sum>max){
            max=sum;
            idx=i-k+1;
        }
    }
    for (int i=idx;i<idx+k;i++) cout << a[i] << " ";
    cout << endl;
    }
    return 0;
}
