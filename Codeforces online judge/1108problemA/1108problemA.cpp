#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long long int i, j, q, L1, R1, L2, R2, a, b;

    cin >> q;

    for(i = 1; i <= q; i++) {
 //       scanf("%l64d%l64d%l64d%l64d", &L1, &R1, &L2, &R2);
        cin >> L1 >> R1 >> L2 >> R2;

        a = R1;
        b = R2;

        if(a == b) b = R2 - 1;

 //       printf("%l64d %l64d\n", a, b);
        cout << a << ' ' << b << endl;

    }

    return 0;
}
