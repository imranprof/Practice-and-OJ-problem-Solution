#include<bits/stdc++.h>
using namespace std;

long long pwr(long long x, long long y);

int main()
{
    long long x, y, result1, result2;

    cin >> x >> y;



    if((x != 1 && y != 1) && (x <= 9 && y <= 9)) {
        result1 = pwr(x,y);
        result2 = pwr(y,x);
        if(result1 > result2) {
            cout << '>' << endl;
        }
        else if(result1 < result2) {
            cout << '<' << endl;
        }
        else {
            cout << '=' << endl;
        }
    }

    else if((x == 1 && y != 1) || (y == 1 && x != 1)) {
        if(x == 1) {
            cout << '<' << endl;
        }
        else if(y == 1) {
            cout << '>' << endl;
        }
        else {
            cout << '=' << endl;
        }
    }

    else {
        if(x > y) {
            cout << '<' << endl;
        }
        else if(x < y) {
            cout << '>' << endl;
        }
        else {
            cout << '=' << endl;
        }
    }

    return 0;
}



long long pwr(long long x, long long y) {
    long long i, res;

    for(i = 1, res = 1; i <= y; i++) {
        res = res * x;
    }

    return res;

}
