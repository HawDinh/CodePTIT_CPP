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
    string a,b;
    getline (cin,a);
    getline (cin, b);
    
    size_t found = a.find(b);
    while (found != string::npos){
        a.replace (found,b.length(),"");
        found = a.find(b);
    }
    cout << a;
}
