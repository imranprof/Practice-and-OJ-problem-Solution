#include<bits/stdc++.h>
using namespace std;

int main()
{
    int lucky[20], num, i, flag;

    cin >> num;

    lucky[0] = 4;
    lucky[1] = 7;
    lucky[2] = 44;
    lucky[3] = 47;
    lucky[4] = 77;
    lucky[5] = 444;
    lucky[6] = 447;
    lucky[7] = 744;
    lucky[8] = 747;
    lucky[9] = 777;
    lucky[10] = 477;

    for(i = 0, flag = 0; i <= 10; i++) {
        if(num % lucky[i] == 0) {
                flag = 1;
        }
    }

    if(flag == 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
