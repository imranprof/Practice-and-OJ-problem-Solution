#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a, b, sum, i;

    cin >> a >> b;

    for(i = a, sum = 0; i <= b; i++) {
        if(i % 2 != 0) {
            sum = sum + i;
        }
    }
    cout << sum <<endl;

    return 0;
}
