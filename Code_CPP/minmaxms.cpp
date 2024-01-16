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
    int m; int s;
    cin >> m >> s;
    int x=s;
    if (m==1 && s==0) cout << "0 0" << endl;
    else if (s<1 || s>9*m) cout << "-1 -1" << endl;
    else{
    string max(m,'0');
    string min(m,'0');
    int i=0;
    while (s>9){
        max[i]='9';
        s-=9;
        i++;
    }
    max[i]=s+'0';

    
    int j=m-1;
    min[0]='1';
    x--;
    while (x>9){
        min[j]='9';
        x-=9;
        j--;
    }
    if (j==0) min[j]=x+'1';
    else min[j]=x+'0';

    cout << min << " " << max;

    }
}
