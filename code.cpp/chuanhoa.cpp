#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <set>
#include <unordered_map>
#include <map>

using ll = long long;
using namespace std;

int main(){
    string s;
    vector <string> v;
    
    getline (cin,s);''
    for (int i=0;i<s.size();i++) s[i]=tolower(s[i]);

    istringstream iss(s);
    string word;

    while (iss >> word){
        v.push_back(word);
    }

    string ten=v.back();
    for (int i=0;i<ten.size();i++) ten[i]=toupper(ten[i]);

    for (int i=0;i<v.size()-1;i++) v[i][0]=toupper(v[i][0]);

    for (int i=0;i<v.size()-1;i++){
        cout << v[i];
        if (i != v.size()-2) cout << " ";
    }
    cout << ", " << ten;
}
