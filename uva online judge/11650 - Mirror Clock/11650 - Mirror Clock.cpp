#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int mhr, mmn, i, j, rhr, rmn, T, n = 0;

    char c;

    cin >> T;

    for(i = 1; i <= T; i++) {

        scanf("%d%c%d", &mhr, &c, &mmn);

        rhr = 11 - mhr;
        if(mmn == 0) rhr = rhr + 1;

        if(rhr <= 0) rhr = 12 + rhr;
        if(mmn != 0) rmn = 60 - mmn;
        else rmn = mmn;

        printf("%02d:%02d\n",rhr,rmn);
    }

    return 0;
}
