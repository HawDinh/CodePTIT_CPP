#include <iostream>
#include <algorithm>
#include <map>
#include <iomanip>
#include <string>
using namespace std;

int main (){
    int t; cin >> t;

    map <string, string> answer;
    answer["101"]="ABBADCCABDCCABD";
    answer["102"]="ACCABCDDBBCDDBB";

    while (t--){
    string code;
    cin >> code;

    double caudung=0.00;

    for (int i = 0; i < 15; i++) {
    char a;
    cin >> a;
    if (a == answer[code][i]) ++caudung;
    }

    double diem=(caudung/15.00)*10;
    cout <<  fixed << setprecision(2) << diem << endl;
    }
}