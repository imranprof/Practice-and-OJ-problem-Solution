#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long cnt, m, n, a, c, d;

    cin >> n >> m >> a;

    c = m  / a;
    if(m % a != 0) c = c + 1;

    d = n / a;
    if(n % a != 0) d = d + 1;

    cout << c * d << endl;

    return 0;
}
