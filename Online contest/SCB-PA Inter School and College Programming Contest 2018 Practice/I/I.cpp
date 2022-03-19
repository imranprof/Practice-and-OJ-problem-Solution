#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int i, T, n, ans, n1, n2, n3, A, B , C, c1, c2, c3, d1, d2, d3;

    cin >> T;

    for(i = 1; i <= T; i++) {
        cin >> n >> A >> B >> C;

        if(n % 2 == 0) n1 = n/2;
        else n1 = (n/2) + 1;

        if(n % 4 == 0) n2 = n/4;
        else n2 = (n/4) + 1;

        if(n % 50 == 0) n3 = n / 50;
        else n3 = (n/50) + 1;

        c1 = n1 * A;
        c2 = n2 * B;
        c3 = n3 * C;


        ans  = min(c1, c2);
        ans = min(ans, c3);

        cout << ans << endl;
    }

    return 0;
}
