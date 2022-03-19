#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N, mx, mn;


    cin >> N;

    if(N == 1) {
        mn = 0;
        mx = 1;
    }
    else if(N < 6) {
        mn = 0;
        mx = 2;
    }


    else {
        mn = 0;
        if(N % 7 == 6) {
            mn = 1;
        }
        mn = mn + ((N / 7) * 2);
        mx = (N / 7) * 2;

        if(N % 7 != 0) {
            if(N % 7 < 2) {
                mx = mx + (N % 7);
            }
            else {
                mx = mx + 2;
            }
        }
    }

    cout << mn << " " << mx <<"\n";

    return 0;
}
