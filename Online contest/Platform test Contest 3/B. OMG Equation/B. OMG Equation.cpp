#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int main()
{
    int a, b, i, t_case;
    long long int res;

    cin >> t_case;

    for(i = 1; i <= t_case; i++) {
        cin >> a >> b;

        res = (9*((a+b) * (a+b))) + (4 * a) + (5*b) + ((a * b)*(a*b));

        cout << res << "\n";
    }

    return 0;
}
