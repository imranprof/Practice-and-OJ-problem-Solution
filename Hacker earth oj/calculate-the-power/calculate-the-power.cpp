#include<iostream>

using namespace std;

const int m = 1e9+7;

long long bigmod(int a, long long p, int m)
{
    long long c;

    if (p == 0) return 1;

    if (p % 2) {
        return ((a % m) * (bigmod(a, p-1, m))) % m;
    }

    else {
        c = bigmod(a, p / 2, m);
        return ((c % m) * (c%m)) % m;
    }
}


int main()
{
    int A;
    long long B;

    cin >> A >> B;

    cout << bigmod(A, B, m) << endl;

    return 0;
}
