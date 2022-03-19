#include<iostream>

using namespace std;

int main()
{
    int i, j, n, a, b, c;

    cin >> n;

    if(n % 3 == 1) {
        a = (n/3) + 1;
        b = n/3;
        c = n/3;
        if(b % 3 == 0 && c % 3 == 0) {
            a = a;
            b = b+2;
            c = c - 2;
        }
        else if(a  % 3 == 0) {
            a = a + 1;
            b = b - 1;
            c = c;
        }
        else {
            a = a;
            b = b;
            c = c;
        }
    }

    else if(n % 3 == 2) {
        a = (n/3) + 1;
        b = (n/3) + 1;
        c = n/3;

        if(a % 3 == 0 && b %3 == 0) {
            a = n/3;
            b = n/3;
            c = (n/3) + 2;
        }
        else if(c % 3 == 0) {
            a = a;
            b = b + 1;
            c = c - 1;
        }
    }
    else {
        a = n/3;
        b = n/3;
        c = n/3;

        if(a % 3 == 0 && b % 3 == 0 && c % 3 == 0) {
            a = a -1;
            b = b - 1;
            c = c + 2;
        }
        else {
            a = a;
            b = b;
            c = c;
        }
    }
    cout << a << ' ' << b << ' ' << c << endl;

    return 0;
}
