#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, to_time;

    cin >> n;

    to_time = (n / 3) * 2;

    if(n % 3 != 0) {
        to_time = to_time + 1;
    }

    cout << to_time <<endl;

    return 0;
}
