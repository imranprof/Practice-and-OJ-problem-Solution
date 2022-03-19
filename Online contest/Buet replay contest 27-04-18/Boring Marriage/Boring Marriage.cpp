#include<stdio.h>
#include<math.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, distance;

    cin >> a >> b;

    if((a >= 0 && b <= 0) || (a <= 0 && b >= 0)) {
        distance = abs(a) + abs(b);
    }

    else {
        distance = abs(a - b);
    }

    cout << distance <<endl;

    return 0;
}
