#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
typedef long long ll;

int main(){
    int t; cin >> t;
    cin.ignore();

    while (t--){
        string s1,s2;
        getline(cin, s1);
        getline(cin, s2);
        set <string> str1,str2;

        istringstream iss1(s1);
        string word;
        while (iss1 >> word){
            str1.insert(word);
        }

        istringstream iss2(s2);
        while (iss2 >> word){
            str2.insert(word);
        }

        vector <string> v;
        for (auto x:str1){
            if (str2.find(x) == str2.end()){
                v.push_back(x);
            }
        }
        
        sort (v.begin(),v.end());

        for (auto x:v) cout << x << " ";
        cout << endl;
    }
}


