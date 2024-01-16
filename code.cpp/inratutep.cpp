#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <set>
#include <unordered_map>
#include <map>
#include <set>
#include <fstream>

using ll = long long;
using namespace std;
int main(){
    ifstream in;
    in.open("A.txt");
    
    while (!in.eof()){
        string s;
        getline (in,s);
        cout << s << endl;
    }
    in.close();
    return 0;
}
