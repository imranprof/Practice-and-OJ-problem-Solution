#include<iostream>

using namespace std;

int main()
{
    int i, n;

    cin >> n;

    if(n == 1 || n == 2) {
        cout << 1 << '\n' << 1 << endl;
    }
    else if(n == 3) {
        cout << 2 << '\n' << 3 << ' ' << 1 << endl;
    }
    else if(n == 4) {
        cout << 4 << '\n' << 3 << ' ' << 1 << ' ' << 4 << ' ' << 2 << endl;
    }
    else {
        cout << n << endl;
        for(i = 1; i <= n; i = i + 2) {
            cout << i << ' ';
        }
        for(i = 2; i <= n; i = i + 2) {
            if(i != 2) cout << ' ';
            cout << i;
        }
    }

    return 0;
}
