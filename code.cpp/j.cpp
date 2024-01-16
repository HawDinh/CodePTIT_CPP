#include <iostream>
#include <iomanip>
using namespace std;
int a[100001],n,ok=1;

void in(){
    for (int i=1;i<=n;i++) cout << a[i] << " ";
    cout << endl; 
}

int tn(int a[],int n){
    int l=1,r=n;
    while (l<r){
        if (a[l]!=a[r]) return 0;
        ++l;--r;
    }
    return 1;
}
void sinh (){
    int i=n;
    while (i>0 && a[i]==1){
        --i;
    }
    if (i==0) ok=0;
    else{
        a[i]=1;
        for (int j=i+1;j<=n;j++) a[j]=0;
    }
    if (tn(a,n)==1 && ok==1) in();
}

int main(){
    int a=2;
    if (a=0) cout << 3;
    else cout  << setprecision(1) << fixed << 1/a;
}
