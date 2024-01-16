#include <iostream>
#include <algorithm>
#include <map>
#include <iomanip>
#include <string>
using namespace std;

int main (){
    int t; cin >> t;
    cin.ignore();
    while (t--){
        string s; getline(cin,s);

        size_t found=s.find("084");
        if (found != string::npos) s.erase(found,3);

        cout << s << endl;
    }
}