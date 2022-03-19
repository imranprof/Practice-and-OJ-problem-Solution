#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, cost, banana, r;
    long long dolars, borrow, sum;


    cin >> cost >> dolars >> banana;

    for(i = 1, sum = 0; i <= banana; i++) {
        sum = sum + (i * cost);
    }

    borrow = sum - dolars;

    if( borrow > 0) {
        cout << borrow <<"\n";
    }

    else {
        r = 0;
        cout << r << "\n";
    }

    return 0;
}
