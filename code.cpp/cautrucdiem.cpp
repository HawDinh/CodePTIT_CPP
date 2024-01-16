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
using ll = long long;
using namespace std;

struct Point{
    double x,y;
};

void input(Point &A){
    cin >> A.x >> A.y;
}

double distance(Point A, Point B){
    double dx = A.x - B.x;
    double dy = A.y - B.y;
    return sqrt(dx*dx+dy*dy);
}

int main(){
    struct Point A, B;
    int t;
    cin >> t;
    while (t--){
        input(A);
        input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
