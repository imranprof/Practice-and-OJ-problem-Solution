#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, *a, k, contes, next_round, i;

    cin >> n >> k;

    a = (int *) malloc(n * sizeof(int));

    for(i = 0; i < n; i++) {
        cin >> a[i];
        if(i == k -1) {
            contes = a[i];
        }
    }

    if(contes == 0) {
        for(i = 0, next_round = 0; i < n;  i++) {
            if(contes < a[i]) {
                next_round++;
            }
        }
    }

    else {
        for(i = 0, next_round= 0; i < n; i++) {
        if(contes <= a[i]) {
            next_round++;
        }
    }
    }
    cout << next_round<<endl;

    return 0;
}
