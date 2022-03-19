#include<iostream>
#include<cstdio>
using namespace std;

int main()
{

    int i, j, T, num[15], mx;
    string S[15];

    cin >> T;

    for(i = 1; i <= T; i++) {

        for(j = 0; j < 10; j++) {
            cin >> S[j];
            cin >> num[j];
        }
        mx = num[0];
        for(j = 1; j < 10; j++) {
            if(mx < num[j]) mx = num[j];
        }

        printf("Case #%d:\n", i);
        for(j = 0; j < 10; j++) {
            if(num[j] == mx){
                cout << S[j] << endl;
            }
        }

    }

    return 0;
}
