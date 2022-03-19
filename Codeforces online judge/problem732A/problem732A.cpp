#include<iostream>

using namespace std;

int main()
{
    int i, cnt, k, r, tot, flag = 0;

    cin >> k >> r;

    for(i = 1, cnt = 0; i <= 9; i++) {
        tot = k * i;

        if(tot % 10 == 0) {
            cnt = i;
            flag = 1;
            break;
        }
        if(tot % 10 == r) {
            cnt = i;
            flag = 1;
            break;
        }

    }

    if(flag == 1) {
        cout << cnt << endl;
    }
    else {
        cnt = 10;
        cout << cnt << endl;
    }


    return 0;
}
